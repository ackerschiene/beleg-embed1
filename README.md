Dies ist das Repository zu dem Prüfungsbeleg im Modul Embedded Systems 1.

Es enthält die drei benötigten Eclipse Projekte zum Übertragen des FreeRTOS-Programms auf einen Arduino Nano mittels des USBasp-Programmers.

Zusätzlich ist der Ordner eclipse-toolchain noch beigefügt. Er dient der Problemlösung bezüglich einer Sprachbarriere zwischen AVRDude und Eclipse. 
Wenn in den Projekteinstellungen kein Board ausgewählt werden kann, ist es notwendig diesen Ordner in das (Ubuntu-)Verzeichnis /usr/local/ zu kopieren und den Pfad in den Eclipse-Gesamteinstellungen bei AVR -> Paths hinzuzufügen.
