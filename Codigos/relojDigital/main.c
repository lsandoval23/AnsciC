/*

Realizar un programa que simule un reloj digital 

	RELOJ DIGITAL
	H:00 M:00 S:00


*/


#include <stdio.h>
#include <stdint.h>
#include <windows.h>



int main(void)
{
	for(uint8_t horas = 0; horas < 24; horas++){
		for(uint8_t minutos = 0; minutos < 60; minutos++){
			for(uint8_t segundos = 0; segundos < 60; segundos++){
				printf("H: %02u M: %02u S: %02u  \r", horas, minutos, segundos);
				Sleep(1000);	
			}
		}
	}
	return 0;
}





