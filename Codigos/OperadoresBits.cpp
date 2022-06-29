#include <stdio.h>
#include <stdint.h>

/* Simulando trabajar con registro de un AVR */

uint8_t PORTB = 0;		// Valor inicial del registro PORTB
uint8_t value = 0;

/*
	Informacion digital de un sensor de temperatura en una palabra digital de 16 bits
	trama de bits: 0000 0000 0000 0000 -> Los 8 bits menos significativos representan la parte decimal
	y los 8 mas significativos la parte entera en formato BCD
	
	trama de bits: 0011 0110 0001 0101 -> 36.15

*/

uint16_t trama_data_temp = 0;
uint8_t t_decenas, t_unidades, t_decimas, t_centecimas ;

int main(void){
	
	trama_data_temp = 0b0011011000010101; //  36.15
	printf("El valor de temperatura recibido es: %x \n", trama_data_temp);
	
	// Decodificando la trama
	// Hacemos typecasting para asegurarnos de que el resultado sea un dato de 8 bits.
	
	t_centecimas = (uint8_t)(trama_data_temp & 0X000F);			// Extrayendo las centesimas
	printf("El valor de centecimas es: %x \n", t_centecimas);
	t_decimas = (uint8_t) ((trama_data_temp & 0X00F0) >> 4);
	printf("El valor de decimas es: %x \n", t_decimas);
	t_unidades = (uint8_t) ((trama_data_temp & 0X0F00) >> 8);			
	printf("El valor de unidades es: %x \n", t_unidades);
	t_decenas = (uint8_t) ((trama_data_temp & 0XF000) >> 12);
	printf("El valor de decimas es: %x \n", t_decenas);
	
	
	// Concatenando la trama
	
	printf("La temperatura decodificada es: %u%u.%u%u \n",t_decenas, t_unidades, t_decimas, t_centecimas);
	
	
	
	
	
	return 0;
}