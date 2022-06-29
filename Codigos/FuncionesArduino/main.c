/*
Desarrolle un programa que simule las funciones de arduino

Funciones Arduino:
	-pinMode() -> void pinMode(nro_pin, modo_pin)
	- void digitalWrite(nro_pin, estado_pin);
	- bool digitalRead(nro_pin);
	- void SerialBegin(baudios);
*/

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// Constantes equivalentes para salidas o entradas en arquitectura AVR
#define INPUT 	0
#define OUTPUT 	1
#define HIGH	1
#define LOW		0


//Prototipos de funciones
void pinMode(uint8_t nro_pin, bool modo_pin);
void digitalWrite(uint8_t nro_pin, bool estado_pin);
bool digitalRead(uint8_t nro_pin);
void SerialBegin(uint32_t baudios);

int main(void)
{
	
	
	return 0;
}

// Desarrollo de funciones
void pinMode(uint8_t nro_pin, bool modo_pin)
{
	if(modo_pin == OUTPUT){
		printf("El pin a configurar es: %u \n", nro_pin);
		printf("Esta configurado como SALIDA");
	}
	
	else if(modo_pin == INPUT){
		printf("El pin a configurar es: %u \n", nro_pin);
		printf("Esta configurado como ENTRADA");
	}
}

void digitalWrite(uint8_t nro_pin, bool estado_pin)
{
	if(estado_pin == HIGH){
		printf("El pin %u esta en nivel ALTO \n", nro_pin);
	}
	else if (estado_pin == LOW){
		printf("El pin %u esta en nivel LOW \n", nro_pin);
	}
}

bool digitalRead(uint8_t nro_pin)
{
	printf("Ingrese el estado del pin")
}

void SerialBegin(uint32_t baudios)
{
	
}
