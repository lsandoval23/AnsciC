#include <stdio.h>
#include <windows.h>

// Protoripos de funcion
void motor1_On(void);
void motor1_Control_on_off(int state);

// Punteros a funcion
void (*ptr_fun1)(void) = &motor1_On;		// El puntero apunta a la funcion motor1_On
void (*ptr_fun2)(int) = motor1_Control_on_off;	// El puntero apunta a la funcion sin usar &


int main(void){
	
	// Llamando a la funcion usando su puntero
	(*ptr_fun2)(0);
	(*ptr_fun1)();
	
	
	return 0;
}

// Desarrollo de las funciones

/*
	Recordar hacer siempre el desarrollo de las funciones antes de poder asignarles un puntero, 
	caso contrario sale un error
*/


void motor1_On(void){
	printf("El motor 1 esta encendido \n");
}

void motor1_Control_on_off(int state){
	
	if(state == 1){
		printf("Motor 1 encendido \n");
	} else if (state == 0){
		printf("Motor 1 apagado \n");
	}
	
	
}