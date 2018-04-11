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
    float divide;
    float multiplica;
    int fac;


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

            case 5: divide = dividirDosNumeros(numeroA, numeroB);
                    if(divide == -0){
                        printf("No se puede realizar la operacion !!");
                    }else{
                        printf("\El resultado de la divicion es %.2f : ",divide);
                    }
                break;

            case 6: multiplica = multiplicaDosNumeros(numeroA, numeroB);
                    printf("\nEl resultado de multiplicar A = %f, con B = %f es : %.2f", numeroA, numeroB, multiplica);
                break;

            case 7: fac = factorial((int) numeroA);
                    if(fac == -1){
                        printf("No se puede calcular el Factorial de un numero menor a 0");
                    }else{
                        printf("El factorial del numero es : %d", fac);
                    }

                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }

}
