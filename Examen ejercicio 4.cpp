/*Programa que muestra las tablas del 1 al 10*/

#include <stdio.h>

int main(){
	
	int i;
	int mult;
	
	printf("Ingrese el numero de la tabla de multiplicar que le gustaria ver:");
	scanf("%d", &mult);
	
	for(i=0;i<=10;i++)//Crear numeros del 1 al 10
	{
		printf("\n%d x %d = %d\n",i,mult,i*mult);	//Realiza las operaciones
	}
	
	return 0;
}
