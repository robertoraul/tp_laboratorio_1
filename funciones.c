#include <stdio.h>
#include "funciones.h"

/** \brief Suma dos números pasados por parámetro
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

/** \brief Resta dos números pasados por parámetro
 *
 * \param numero1, primer parámetro ingresado (minuendo)
 * \param numero2, segundo parametro ingresado (sustraendo)
 * \return Retorna la diferencia entre ambos números ingresados
 *
 */
float restaDosNumeros(float numero1, float numero2){
    float retorno;
    retorno = numero1 - numero2;

    return retorno;
}

/** \brief Multiplica dos números pasados por parámetro
 *
 * \param numero1, primer factor pasado por parametro
 * \param numero2, segundo factor pasado por parametro
 * \return (retorno) retorna el producto de ambos números
 *
 */
float multiplicaDosNumeros(float numero1, float numero2){
    float retorno;
    retorno = numero1 * numero2;

    return retorno;
}

/** \brief Divide dos números pasados por parámetro validando que el divisor sea diferente de cero
 *
 * \param numero1, primer parámetro (dividendo)
 * \param numero2, segundo parámetro (divisor)
 * \return Si divisor es diferente de cero, retorna el cociente de ambos números,
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

/** \brief Calcula el factorial de un número entero mayor o igual a cero
 *
 * \param numero, número entero pasado por parametro
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

/** \brief Pide un número con un mensaje pasado por parámetro
 *
 * \param mensaje, Mensaje optimizado para pedir el número
 *
 * \return Retorna el número ingresado por el usuario
 *
 */
float pedirNumero(char mensaje[]){
    float retorno;
    printf("%s", mensaje);
    scanf("%f", &retorno);

    return retorno;
}

/** \brief Muestra un mensaje personalizado optenido por parametro
 *
 * \param mensaje, char[] obtenido por parametro
 *
 */

void enviaMensaje(char mensaje[]){
    printf("%s", mensaje);
}

/** \brief Muestra opciones de un menú que serán evaluadas por el usuario
 *
 * \param numero1, primer número ingresado para las operaciones
 * \param numero2, segundo número ingresado para las operaciones
 * \return retorno, opción elegida por el usuario
 *
 */

int enviarmenu(float numero1, float numero2){
    int retorno;

    printf("\n");
    printf("1- Ingresar 1er operando ( A = %.2f )\n", numero1);
    printf("2- Ingresar 2do operando ( B = %.2f )\n", numero2);
    printf("3- Calcular la suma ( %.2f + %.2f )\n", numero1, numero2);
    printf("4- Calcular la resta ( %.2f - %.2f )\n", numero1, numero2);
    printf("5- Calcular la division ( %.2f / %.2f )\n", numero1, numero2);
    printf("6- Calcular la multiplicacion ( %.2f * %.2f )\n", numero1, numero2);
    printf("7- Calcular el factorial ( %.2f !)\n", numero1);
    printf("8- Calcular todas las operacione\n");
    printf("9- Salir\n");

    scanf("%d", &retorno);

    return retorno;
}
