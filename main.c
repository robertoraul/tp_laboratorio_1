#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numeroA;
    float numeroB;
    float suma;
    float resta;
    long fac;


    while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1: printf("Ingrese primer numero : ");
                    scanf("%f", &numeroA);
                break;
            case 2: printf("Ingrese segundo numero : ");
                    scanf("%f", &numeroB);
                break;
            case 3:
                    suma = sumaDosNumeros(numeroA, numeroB);
                    printf("La suma de  (%.2f + %.2f = %.2f) :\n", numeroA,numeroB,suma);

                break;
            case 4:
                    resta = restaDosNumeros(numeroA, numeroB);
                    printf("\nLa resta entre los dos numeros es : %.2f", resta);
                break;
            case 5:
                break;
            case 6:
                break;
            case 7: fac = factorial(numeroA);
                    printf("El factorial del numero es : %l", fac);
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }

}
