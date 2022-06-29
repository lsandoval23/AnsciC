#include <stdio.h>
#include <stdint.h>

/* 
	int -> 4 bytes
	char -> 8 bits


*/



int main(void)
{
	//size of devuelve el valor en formato entero del tamaño en bytes del tipo de dato
	printf("El tamanio de int: %d Bytes \n", sizeof(int));
	printf("El tamanio de char: %d Bytes \n", sizeof(char));	
	
	return 0;
}