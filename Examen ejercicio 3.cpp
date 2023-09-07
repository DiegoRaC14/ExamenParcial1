/*Programa que muestra los numero impares hasta el valor ingresado*/
#include <stdio.h>

int main() 
{
    int numero; // Declarar variable

    printf("Introduzca un numero entero:");
	scanf("%d",&numero);//Ingresar numero
	printf("Los numeros impares del 1 al %d son:\n", numero);

    for (int i = 1; i <= numero; i++)/*Valor de i empieza en 1, incrementa de valor en 1 siempre y cuando
    se cumpla que i<= numero que ingresamos*/
	{
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
