/*Programa que muestra los numeros impares hasta el valor ingresado*/

#include <stdio.h>

int main() 
{
    int numero; // Declarar variable
    int i = 1; // Inicializar variable

    printf("Introduzca un numero entero:");
    scanf("%d", &numero); // Ingresar numero
    printf("Los numeros impares del 1 al %d son:\n", numero);

    while (i <= numero)
	{
        if (i % 2 != 0) 
		{
            printf("%d\n", i);
        }
        i++; // Aumentar i en 1 hasta 
    }
    return 0;
}
