/*Programa que suma los numeros enteros del 1 al valor que se ingresa*/

#include <stdio.h>
#include <math.h>

int main()
{
	int numeroEntero;//Declarar variable a ingresar
	int sumaNumeros;
	
	printf("Ingrese un numero entero:");
	scanf("%d",&numeroEntero);//Ingresar numero
	
	sumaNumeros=((numeroEntero*(numeroEntero+1))/2); //Operacion

	printf("\nLa suma de los primeros %d numeros naturales es: %d\n",numeroEntero,sumaNumeros);

return 0; 
}
