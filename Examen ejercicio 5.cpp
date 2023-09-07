/*Programa que corre hasta que aparece un numero negativo*/

#include <stdio.h>

int main() {
    int numero;

    do 
	{
        printf("\vIngrese un numero: ");
        scanf("%d", &numero);
        
		if (numero >= 0) 
		{
            printf("Su numero es positivo, puede continuar con el programa.\n");
        }
    } while (numero >= 0);

    printf("Ha ingresado un numero negativo. El programa ha terminado.\n");

    return 0;
}

