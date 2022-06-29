#include <stdio.h>
#include <stdint.h>

// Definiendo un estructura para definir una variable TRISDbits_t
// dentro de ella se declara campos de bit de 1 bit de longitud
// simulando al registro de un microcontrolador

typedef struct
{
	unsigned TRISD0		:1;
	unsigned TRISD1		:1;
	unsigned TRISD2		:1;
	unsigned TRISD3		:1;
	unsigned TRISD4		:1;
	unsigned TRISD5		:1;
	unsigned TRISD6		:1;
	unsigned TRISD7		:1;
} TRISDbits_t;

TRISDbits_t TRISDbits;

typedef struct
{
	uint8_t bit0	:1;
	uint8_t bit1to2	:2;
	uint8_t bit3	:1;
	uint8_t bit4	:1;
	uint8_t bit5to7	:3;
} Bytebits_t;
	
	
Bytebits_t Bytebits;
	

int main(void){
	
	Bytebits.bit0 = 1;
	Bytebits.bit1to2 = 3;	
	Bytebits.bit3 = 0;
	
	printf("El valor de bit0 es:	%d \n", Bytebits.bit0);
	
	// Viendo el tamanio en memoria 
	printf("El tamaño en bytes de Bytebits es:	%d \n", sizeof(Bytebits));
	printf("El tamaño en bytes de TRISDbits es:	%d", sizeof(TRISDbits));
	
	
	
	return 0;
}













