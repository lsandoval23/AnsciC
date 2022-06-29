#include <stdio.h>
#include <stdint.h>
#include <windows.h>

int dato = 10;

int main(void)
{
	// dato++ -> Post incremento
	// ++dato -> Pre incremento
	
	while(++dato <= 20){
		printf("Dato es %d \n", dato);
	}
	return 0;
}