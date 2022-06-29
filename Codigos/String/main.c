#include <stdio.h>
#include <stdint.h>

char vector[4] = {'h','o','l','a'};			// Un vector de 4 elementos
char texto1[5] = {'h','o','l','a','\0'};	// Este es un string

char texto2[] = "Hola Curso Ansi C";		// 18 caracteres de esta cadena

uint8_t posc_arreglo = 0; 
uint8_t contador = 0;


int main(void){
	
	// Contar caracteres especificos dentro de la cadena de caracteres
	
	while(posc_arreglo < (sizeof(texto2)-1)){
		if(texto2[posc_arreglo] == 'a' || texto2[posc_arreglo] == 'A'){
			contador++;
		}
		posc_arreglo++;
	}
	
	printf("La cantidad de caracteres a es : %u", contador);
	
	
	
	
	return 0;
}