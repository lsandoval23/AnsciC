// Librerias 
#include <stdio.h>
#include <stdint.h>



// Zona para declaracion de variables globales

// tipos de datos nativos (recordar que estos no son datos estándar) 
// su longitud de palabra puede variar dependiendo de la arquitectura del uC y el compilador
int dato = 1000;
char letra = 'A';
float temperatura = 28.95;		// acepta 6 digitos de precision decimal
double presion = 40.45053;		// acepta 12 digitos de precision decimal

// tipos de datos enteros estandares (recordar que la libreria stdint no aplica para float o double)

int8_t numero = -100;
uint8_t numero2 = 200;
int16_t dato1 = -1200;
uint16_t productos = 50000;		// valor max. en 16 bits = 65535
uint32_t tiks = 80500;
uint64_t contador = 1000000;


// Funcion principal (punto de arranque del programa)
int main(void)
{
	// Esta funcion permite imprimir mensajes por consola, en este caso una cadena 
	// de caracteres
	printf("Hola curso Ansi C :D\n");
	
	// Imprimiremos por consola el valor de las variables que hemos declarado
	// Se usa el especificador de formato para indicar que se esta pasando un dato de tipo entero
	printf("El valor de dato es: %d \n", dato);
	printf("El valor de letra es: %c \n", letra);
	printf("El valor de temperatura es: %.2f \n", temperatura);		// .2 para indicar el numero de decimales
	printf("El valor de presion es: %.5f \n\n", presion);
	
	printf("numero: %d \n", numero);
	printf("numero2: %u \n", numero2);
	printf("dato1: %d \n", dato1);
	
	
	return 0;	
}












