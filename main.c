#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(){

    char seguir='s';
    int opcion= 0;
    float numeroA;
    float numeroB;
    float suma;
    float resta;
    float divide;
    float multiplica;
    int fac;

    while(seguir=='s'){
        printf("\n");
        opcion = enviarmenu(numeroA, numeroB);

        switch(opcion){

            case 1: system("cls");
                    numeroA = pedirNumero("Ingrese primer numero (A) : ");
                break;

            case 2: system("cls");
                    numeroB = pedirNumero("Ingrese Segundo numero (B) : ");
                break;

            case 3: system("cls");
                    suma = sumaDosNumeros(numeroA, numeroB);
                    printf("\nLa suma de  ( A = %.2f + B = %.2f ) es igual a : %.2f",
                            numeroA, numeroB, suma);
                break;

            case 4: system("cls");
                    resta = restaDosNumeros(numeroA, numeroB);
                    printf("\nLa resta entre los numeros ( A = %.2f - B = %.2f ) es igual a : %.2f",
                            numeroA, numeroB, resta);
                break;

            case 5: system("cls");
                    divide = dividirDosNumeros(numeroA, numeroB);
                    if(divide == -0){
                        printf("\nNo se puede realizar la Divicion, ( B ) no puede ser 0 !!");
                    }
                    else{
                        printf("\nEl resultado de la divicion entre ( A = %.2f / B = %.2f ) es igual a : %.2f",
                                numeroA, numeroB, divide);
                    }
                break;

            case 6: system("cls");
                    multiplica = multiplicaDosNumeros(numeroA, numeroB);
                    printf("\nEl resultado de multiplicar ( A = %.2f * B = %.2f ) es igual a : %.2f",
                            numeroA, numeroB, multiplica);
                break;

            case 7: system("cls");
                    fac = factorial((int) numeroA);
                    if(fac != -1){
                        printf("\nEl factorial del numero %d es : %d", (int)numeroA, fac);
                    }
                    else{
                        printf("\nNo se puede calcular el Factorial de un numero menor a 0");
                    }
                break;

            case 8: system("cls");
                    suma = sumaDosNumeros(numeroA, numeroB);
                    resta = restaDosNumeros(numeroA, numeroB);
                    divide = dividirDosNumeros(numeroA, numeroB);
                    multiplica = multiplicaDosNumeros(numeroA, numeroB);
                    fac = factorial(numeroA);

                    printf("\nLa suma de %.2f + %.2f = %.2f ", numeroA,numeroB, suma);
                    printf("\nLa resta de %.2f - %.2f = %.2f ",numeroA, numeroB, resta);

                    if(divide != -0){
                        printf("\nLa divicion de %.2f / %.2f = %.2f ",numeroA, numeroB, divide);
                    }else{
                        printf("\nNo se puede realizar la operacion de divicion!!!");
                    }

                    printf("\nLa multiplicacion de %.2f * %.2f = %.2f", numeroA, numeroB, multiplica);

                    if(fac != -1){
                        printf("\nEl factorial de %.2f es: %d", numeroA, fac);
                    }else{
                        printf("\nNo se puede calcular el Factorial de un numero menor que cero!!!");
                    }
                break;

            case 9:
                seguir = 'n';
                break;
        }

    }

}
