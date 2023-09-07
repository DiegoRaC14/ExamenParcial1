/*Programa que muestra las tablas del 1 al 10*/

#include <stdio.h>

int main(){
	
	int i=1;
	int mult;//Variable a ingresar
	
	printf("Ingrese el numero de la tabla de multiplicar que le gustaria ver:");
	scanf("%d", &mult);
	
	while(i<=10)//Imprime los numero siempre y cuando sean menores o iguales a 10
	{	
		if (i<=10)//Imprime operaciones cuando 1<=10
		{
			printf("\n%d x %d = %d\n",i,mult,i*mult);	//Realiza las operaciones
		}
		i++;
	}
	return 0;
}
