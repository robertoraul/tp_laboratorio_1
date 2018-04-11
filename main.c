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
            case 1: printf("\nIngrese primer numero (A) : ");
                    scanf("%f", &numeroA);
                break;

            case 2: printf("\nIngrese segundo numero (B) : ");
                    scanf("%f", &numeroB);
                break;

            case 3: suma = sumaDosNumeros(numeroA, numeroB);
                    printf("\nLa suma de  ( A = %.2f + B = %.2f ) es igual a : %.2f", numeroA, numeroB, suma);
                break;

            case 4: resta = restaDosNumeros(numeroA, numeroB);
                    printf("\nLa resta entre los numeros ( A = %.2f - B = %.2f ) es igual a : %.2f",
                            numeroA, numeroB, resta);
                break;

            case 5: divide = dividirDosNumeros(numeroA, numeroB);
                    if(divide == -0){
                        printf("\nNo se puede realizar la Divicion ( B ) no puede ser 0 !!");
                    }
                    else{
                        printf("\El resultado de la divicion entre ( A = %.2f / B = %.2f ) es igual a : %.2f",
                                numeroA, numeroB, divide);
                    }
                break;

            case 6: multiplica = multiplicaDosNumeros(numeroA, numeroB);
                    printf("\nEl resultado de multiplicar ( A = %.2f * B = %.2f ) es igual a : %.2f",
                            numeroA, numeroB, multiplica);
                break;

            case 7: fac = factorial((int) numeroA);
                    if(fac == -1){
                        printf("\nNo se puede calcular el Factorial de un numero menor a 0");
                    }
                    else{
                        printf("\nEl factorial del numero %d es : %d", (int)numeroA, fac);
                    }
                break;

            case 8: suma = sumaDosNumeros(numeroA, numeroB);
                    resta = restaDosNumeros(numeroA, numeroB);
                    divide = dividirDosNumeros(numeroA, numeroB);
                    multiplica = multiplicaDosNumeros(numeroA, numeroB);
                    fac = factorial(numeroA);
                    system("cls");
                    printf("\nLa suma de %.2f + %.2f = %.2f ", numeroA,numeroB, suma);
                    printf("\nLa resta de %.2f - %.2f = %.2f ",numeroA, numeroB, resta);
                    printf("\nLa divicion de %.2f / %.2f = %.2f ",numeroA, numeroB, divide);
                    printf("\nLa multiplicacion de %.2f * %.2f = %.2f", numeroA, numeroB, multiplica);
                    printf("\nEl factorial de %.2f es: %d", numeroA, fac);
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }

}
