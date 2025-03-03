Dies ist das Repository zum Prüfungsbeleg "FreeRTOS Arduino" im Modul Embedded Systems 1.

Es enthält die drei benötigten Eclipse Projekte zum Übertragen des FreeRTOS-Programms auf einen Arduino Nano mittels des USBasp-Programmers.

Zusätzlich ist der Ordner eclipse-toolchain noch beigefügt. Er dient der Problemlösung bezüglich einer Sprachbarriere zwischen AVRDude und Eclipse. 
Wenn in den Projekteinstellungen kein Board ausgewählt werden kann, ist es notwendig diesen Ordner in das (Ubuntu-)Verzeichnis /usr/local/ zu kopieren und den Pfad in den Eclipse-Gesamteinstellungen bei AVR -> Paths hinzuzufügen.

![grafik](https://github.com/user-attachments/assets/75c10576-a406-4052-b598-215c3559a7a8)
