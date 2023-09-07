/*Programa que suma 10 numeros al valor que ingresa el usuario*/

#include <stdio.h>

int main()
{
	int i=1;
	int numeroEntero;//	Variable a ingresar
	int suma=0;// Variable almacenar la suma
	
	printf("Ingrese un numero entero:");
	scanf("%d", &numeroEntero);
	
	    while (i <= 10)
	{
	        suma =numeroEntero+1;
	        i++; // Aumentar i en 1 hasta que sea menor que el numero que se introdujo 
			printf("%d\n", i);//Mostrar la suma de los numeros en lista

    }
    return 0;
}

