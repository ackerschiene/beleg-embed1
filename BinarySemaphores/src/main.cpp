/*
 * main2.cpp
 *
 *  Created on: 27.02.2025
 *      Author: michel
 */


extern "C" void wdt_interrupt_enable(void) {}
#include "Arduino.h"
#include "FreeRTOS/Arduino_FreeRTOS.h"
#include "FreeRTOS/semphr.h"

#ifndef digitalPinToInterrupt
#define digitalPinToInterrupt(p) ((p) == 2 ? 0 : ((p) == 3 ? 1 : -1))
#endif

SemaphoreHandle_t interruptSemaphore;
#define LED 10

/* Interrupt nur über DI2 oder DI3 möglich.
Zur Zeit nicht angeschlossen.
Mit Drahtbrücke ralisierbar. */


void interruptHandler()
{
  Serial.println("Semaphore is given");
  BaseType_t  xHigherPriorityTaskWoken = pdFALSE;
  xSemaphoreGiveFromISR(interruptSemaphore, &xHigherPriorityTaskWoken);
}

void TaskLedon(void *pvParameters)
{
  (void) pvParameters;

  for (;;)
    {
    if (xSemaphoreTake(interruptSemaphore, portMAX_DELAY) == pdPASS)
    {
      Serial.println("TaskLedon Received Semaphore");
      digitalWrite(LED, HIGH);
    }
    }
  }

void TaskLedoff(void *pvParameters)
{
  (void) pvParameters;
  for (;;)
    {
    if (xSemaphoreTake(interruptSemaphore, portMAX_DELAY) == pdPASS)
    {
      Serial.println("TaskLedoff Received Semaphore");
      digitalWrite(LED, LOW);
      //vTaskStartScheduler();
   }

  }
}


void setup()
{
  Serial.begin(9600); // Enable serial communication library.
  pinMode(LED, OUTPUT);

 // Create task for Arduino led
  xTaskCreate(TaskLedon, // Task function
              "Ledon", // Task name
              128, // Stack size
              NULL,
              0 ,// Priority
              NULL );
   xTaskCreate(TaskLedoff, // Task function
              "Ledoff", // Task name
              128, // Stack size
              NULL,
              0, // Priority
              NULL );
  interruptSemaphore = xSemaphoreCreateBinary();
  if (interruptSemaphore != NULL)
  {
    attachInterrupt(digitalPinToInterrupt(2), interruptHandler, HIGH);
  }
}

void loop() {}

int main() {
	setup();
	vTaskStartScheduler();
}

