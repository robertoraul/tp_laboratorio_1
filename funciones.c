#include <stdio.h>
#include "funciones.h"

/** \brief Suma dos n�meros pasados por par�metro
 *
 * \param numero1 primer parametro
 * \param numero2 segundo parametro
 * \return Retorna la suma de numero1 y numero2
 *
 */
float sumaDosNumeros(float numero1, float numero2){
    float retorno;
    retorno = numero1 + numero2;

    return retorno;
}

/** \brief Resta dos n�meros pasados por par�metro
 *
 * \param numero1, primer par�metro ingresado (minuendo)
 * \param numero2, segundo parametro ingresado (sustraendo)
 * \return Retorna la diferencia entre ambos n�meros ingresados
 *
 */
float restaDosNumeros(float numero1, float numero2){
    float retorno;
    retorno = numero1 - numero2;

    return retorno;
}

/** \brief Multiplica dos n�meros pasados por par�metro
 *
 * \param numero1, primer factor pasado por parametro
 * \param numero2, segundo factor pasado por parametro
 * \return (retorno) retorna el producto de ambos n�meros
 *
 */
float multiplicaDosNumeros(float numero1, float numero2){
    float retorno;
    retorno = numero1 * numero2;

    return retorno;
}

/** \brief Divide dos n�meros pasados por par�metro validando que el divisor sea diferente de cero
 *
 * \param numero1, primer par�metro (dividendo)
 * \param numero2, segundo par�metro (divisor)
 * \return Si divisor es diferente de cero, retorna el cociente de ambos n�meros,
 * si divisor es igual a cero, retorna -0
 *
 */
float dividirDosNumeros(float numero1, float numero2){
    float retorno;
    if(numero2 != 0){
        retorno = numero1 / numero2;
    }else{
        retorno = -0;
    }
    return retorno;
}

/** \brief Calcula el factorial de un n�mero entero mayor o igual a cero
 *
 * \param numero, n�mero entero pasado por parametro
 * \return Si numero es mayor o igual a cero, retorna el factorial de numero,
 * si numero es menor a cero retorna -1
 *
 */
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

/** \brief Pide un n�mero con un mensaje pasado por par�metro
 *
 * \param mensaje, Mensaje optimizado para pedir el n�mero
 *
 * \return Retorna el n�mero ingresado por el usuario
 *
 */
float pedirNumero(char mensaje[]){
    float retorno;
    printf("%s", mensaje);
    scanf("%f", &retorno);

    return retorno;
}
