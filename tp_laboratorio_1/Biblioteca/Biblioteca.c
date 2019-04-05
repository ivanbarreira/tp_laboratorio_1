#include <stdio.h>
#include <stdlib.h>





/**
 * \brief Recibe dos numeros y los suma
 * \param x EL primer operando
 * \param y El segundo operando
 * \return Retorna el resultado de la suma
 *
 */
int sumar(int x, int y)
{
    float suma;
    suma = x+y;
    return suma;
}





/**
 * \brief Realiza una resta entre dos numeros que recibe
 * \param x El primer operando
 * \param y El segundo operando
 * \return Retorna el resultado de la resta
 *
 */
int restar(int x, int y)
{
    float resta;
    resta = x-y;
    return resta;
}





/**
 * \brief Realiza una multiplicacion entre dos numeros que recibe
 * \param x El primer factor
 * \param y El segundo factor
 * \return Devuelve o retorna el factor calculado
 *
 */
int multiplicar(int x, int y)
{
    float producto;
    producto = x*y;
    return producto;
}





/**
 * \brief Realiza una division entre dos numeros que recibe
 * \param x El dividendo de la division
 * \param y El divisor
 * \return Devuelve el cociente de la operacion
 *
 */
float dividir(float x, int y)
{
    float cociente;
    cociente = x/y;
    return cociente;
}






/**
 * \brief Recibe un numero y le calcula el factorial
 * \param x El numero del cual se va a calcular el factorial
 * \return Devuelve el factorial del numero ingresado
 *
 */
int factorizar(int x)
{
    int factorial;
    int i;

    factorial = 1;
    x++;

    for(i=1;i<x;i++)
    {
        factorial*=i;
    }
    return factorial;
}

