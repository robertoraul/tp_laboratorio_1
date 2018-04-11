#include <stdio.h>
#include "funciones.h"

float sumaDosNumeros(float numero1, float numero2){
    float retorno;
    retorno = numero1 + numero2;

    return retorno;
}

float restaDosNumeros(float numero1, float numero2){
    float retorno;
    retorno = numero1 - numero2;

    return retorno;
}

float multiplicaDosNumeros(float numero1, float numero2){
    float retorno;
    retorno = numero1 * numero2;

    return retorno;
}

float dividirDosNumeros(float numero1, float numero2){
    float retorno;
    if(numero2 != 0){
        retorno = numero1 / numero2;
    }else{
        retorno = -0;
    }
    return retorno;
}

int factorial(int numero){
    int retorno =1;

    if( numero > 1){
        for(int i = numero; i>1; i--){
            retorno = retorno * i;
        }
    }
    if(numero == 0 || numero == 1){
        retorno = 1;
    }
    if(numero < 0){
        retorno = -1;
    }
    return retorno;
}
