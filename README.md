Dies ist das Repository zum Prüfungsbeleg "FreeRTOS Arduino" im Modul Embedded Systems 1.

Es enthält die drei benötigten Eclipse Projekte zum Übertragen des FreeRTOS-Programms auf einen Arduino Nano mittels des USBasp-Programmers innerhalb der Eclipse IDE-Umgebung.

Zum Umsetzen des Projekts wird als erstes der Projektordner "ArduinoCore" in Eclipse hinzugefügt und gebuildet, als nächstes der Projektordner "ArduinoLibraries". *
Der dritte Projektordner "BinarySemaphores wird zunächst nur hinzugefügt und aber noch nicht gebuildet, da noch kleinere Einstellungen durchgeführt werden müssen, die sich nicht exportieren ließen. Sie werden im Folgenden erklärt.

Zusätzlich ist der Ordner eclipse-toolchain noch beigefügt. Er dient der Problemlösung bezüglich einer Sprachbarriere zwischen AVRDude und Eclipse. 
Wenn in den Projekteinstellungen kein Board ausgewählt werden kann, ist es notwendig diesen Ordner in das (Ubuntu-)Verzeichnis /usr/local/ zu kopieren und den Custom-Pfad /usr/local/eclipse-toolchain in den Eclipse-Gesamteinstellungen bei AVR -> Paths hinzuzufügen.

![grafik](https://github.com/user-attachments/assets/75c10576-a406-4052-b598-215c3559a7a8)

Danach muss in den Projekteinstellungen des Projekts BinarySemaphores noch der Programmer konfiguriert werden.

![grafik](https://github.com/user-attachments/assets/1f5656f2-228c-454c-bf7b-4bf4e258e450)

Im Anschluss sollte noch in den Projekteinstellungen unter AVR -> Target Hardware überprüft werden, ob der richtige Microkontroller-Chip (ATmega328P) mit einer Frequenz von 16Mhz ausgewählt ist.

Als letztes muss nun noch die Active Build Configuration auf Release umgestellt werden. 

![grafik](https://github.com/user-attachments/assets/3b15e779-307e-4479-b556-30f6cc8284ce)

Nun kann das Projekt "BinarySemaphore" auch gebuildet werden und auf den Arduino Nano übertragen werden.
Die Tasks werden über den Interrupt-Taster an Pin D2 gesteuert. Ist dort kein Taster direkt angeschlossen, lässt sich dieser über den Kontakt einer Drahtbrücke simulieren.
Man sollte nun die grüne LED abwechselnd an oder aus gehen sehen.






\* Es können auch alle drei Projektordner gemeinsam in Eclipse hinzugefügt werden. Sie müssen aber in der oben genannten Reihenfolge gebuildet werden, da sie auf eineander aufbauen.
