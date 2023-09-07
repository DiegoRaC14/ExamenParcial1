/*Programa que suma 10 numeros al valor que ingresa el usuario*/

#include <stdio.h>

int main()
{
    int numeroEntero;//Variable a ingresar
    int i=1;
    
    printf("Ingrese un numero entero:");
    scanf("%d", &numeroEntero);

    while (i <= 10)//Mientras i sea menor o igual a 1 se repite if
	{
		if (i <= 10)//Si i es menor que 10 se repite lo que sigue
		{
		printf("%d\n", numeroEntero + i);//Se suma i al numero ingresado cada que se repite
        i++;//i aumenta en 1 hasta que se deje de cumplir que i<=10
    	}
    }
	
    return 0;
}


