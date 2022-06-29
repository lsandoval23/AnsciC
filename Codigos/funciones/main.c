#include <stdio.h>
#include <stdint.h>

// Zona para la declaracion de prototipo de funciones
void sumar(void);
void multiplicar(int A, int B);
int division(int A, int B);

// Zona para la declaracion de variables globales
int numA = 90;
int numB = 100;
int resultado = 0;


int main(void)
{
	sumar();
	multiplicar(4,50);
	printf("El valor de la division es: %d", division(100,10));
	
	return 0;
}


// Zona para el desarrollo de funciones
void sumar(void)
{
	// Tarea que realiza la funcion
	resultado = numA + numB;
	printf("Resultado de la suma: %d \n", resultado);
}



void multiplicar(int A, int B)
{
	// Declaracion de una variable local
	int r = 0;
	r = A * B;
	printf("El resultado de la multiplicacion es: %d \n", r);
}


int division(int A, int B)
{
	int R = 0;
	R = A/B;
	return R;
}