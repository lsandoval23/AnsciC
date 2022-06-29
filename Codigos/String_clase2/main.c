/*
	Usando la funcion strTok para decodificar la trama NMEA

*/



#include <stdio.h>
#include <stdint.h>
#include <string.h>

char NMEA_trama[] = "$GPGGA,123519,4807.038,N,01131.000,E,2,08,0.9,545.4,M,46.9,M,,*42";

// Componentes de la trama NMEA
char NMEA_sentencia[20];
char NMEA_tiempo_utc[20];
char NMEA_latitud[20];
char NMEA_norte_sur[5];
char NMEA_longitud[20];
char NMEA_este_oeste[5];
char NMEA_fix[5];

int main(void){
	
	printf("La trama es: %s", NMEA_trama);
	
	// Decodificamos la primera parte del mensaje
	strcpy(NMEA_sentencia, strtok(NMEA_trama, ","));		
	// la funcion strtok devuelve un puntero que apunta a la direccion de memoria del string hasta encontrarse con la coma

	
	// Decodificamos el tiempo
	strcpy(NMEA_tiempo_utc, strtok('\0', ","));
	// Como strtok reemplaza el delimitador por un NULL (\0) , se indica que ahora el puntero debe apuntar
	// a partir del null
	printf("%s \n", NMEA_tiempo_utc);
	
	
	strcpy(NMEA_latitud, strtok('\0', ","));
	strcpy(NMEA_norte_sur, strtok('\0', ","));
	strcpy(NMEA_longitud, strtok('\0', ","));
	strcpy(NMEA_este_oeste, strtok('\0', ","));
	strcpy(NMEA_fix, strtok('\0', ","));
	
	// Procesar el fix para verificar si los datos son validos
	
	if((strcmp(NMEA_fix, "1") == 0) || (strcmp(NMEA_fix, "2") == 0)) {
		// Los datos son validos 
		printf("Los datos son validos \n");
		
		printf("%s \n", NMEA_sentencia);
		printf("%s \n", NMEA_tiempo_utc);
		printf("%s \n", NMEA_latitud);
		printf("%s \n", NMEA_norte_sur);
		printf("%s \n", NMEA_longitud);
		printf("%s \n", NMEA_este_oeste);		
	}
	
	else {
		printf("Datos invalidos, falla en conexion");
	}
	return 0;
}