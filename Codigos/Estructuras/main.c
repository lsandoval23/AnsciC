#include <stdio.h>
#include <stdint.h>
#include <string.h>

// Declaracion de la estructura usando typedef

typedef struct
{
	char str_nombres[50];
	char str_apellidos[50];
	char str_universidad[50];
	char str_puesto[50];
	int ciclo_univ;
	float pret_salariales;
} Practicante_t;


/*
	Arreglo de estructuras: Es una coleccion de variables de tipo struct, donde en 
	cada posicion de un array se reserva memoria suficiente para almacenar todos los 
	campos de la variable

*/

// Declaracion de un array de estructuras

Practicante_t practicantes[100];
int indice_array;

int main(void)
{
	// Obtenemos los datos por consola
	
	for (indice_array = 0; indice_array < 3; indice_array++ )
	{
		printf("Ingrese sus nombres de P%d: ", (indice_array+1));
		fflush(stdin);
		gets(practicantes[indice_array].str_nombres);
		
		printf("Ingrese sus apellidos de P%d: ", (indice_array+1));
		fflush(stdin);
		gets(practicantes[indice_array].str_apellidos);
		
		printf("Ingrese su universidad de P%d: ", (indice_array+1));
		fflush(stdin);
		gets(practicantes[indice_array].str_universidad);
		
		printf("Ingrese el puesto a postular de P%d: ", (indice_array+1));
		fflush(stdin);
		gets(practicantes[indice_array].str_puesto);
		
		printf("Ingrese el ciclo universitario de P%d: ", (indice_array+1));
		scanf("%d", &practicantes[indice_array].ciclo_univ);
		
		printf("Ingreselas pretensiones salariales de P%d: ", (indice_array+1));
		scanf("%f", &practicantes[indice_array].pret_salariales);
		
		printf("\n");
		
	}
	
	printf("\n");
	
	// Imprimimos los datos en pantalla
	for (indice_array = 0; indice_array < 3; indice_array++ ){
		
		printf("Datos del practicante %d \n", (indice_array+1));
		printf("Nombres:	%s \n", practicantes[indice_array].str_nombres);
		printf("Apellidos:	%s \n", practicantes[indice_array].str_apellidos);
		printf("Universidad:	%s \n", practicantes[indice_array].str_universidad);
		printf("Puesto:		%s \n", practicantes[indice_array].str_puesto);
		printf("Pret. Salariales: 	%f \n", practicantes[indice_array].pret_salariales);
		
		printf("\n");
		
	}
	
	
	
	return 0;
}