#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca/Biblioteca.h"

int main()
{
    int primerOperando;
    int segundoOperando;
    int operacion;
    int respuestaSuma;
    int respuestaResta;
    int respuestaMultiplicacion;
    float respuestaDivision;
    int respuestaFactorialA;
    int respuestaFactorialB;
    int flag1;
    int flag2;
    int flag3;



    flag1 = 0;
    flag2 = 0;
    flag3 = 0;



    do
    {
        if (flag1==0)
        {
            printf("Ingrese el numero '1' si desea ingresar el primer operando (A = X)\n\n");
        }
        else
        {
            printf("\n\n\nIngrese el numero '1' si desea ingresar el primer operando (A = %d)\n\n", primerOperando);
        }



        if (flag2==0)
        {
            printf("Ingrese el numero '2' si desea ingresar el segundo operando (B = Y)\n\n\n");
        }
        else
        {
            printf("Ingrese el numero '2' si desea ingresar el segundo operando (B = %d)\n\n\n", segundoOperando);
        }

        printf("Para calcular todas las operaciones:\n   suma (A+B),\n   resta (A-B),\n   multiplicación (A*B),\n   division (A/B),\n   factorial de A (A!),\n   factorial de B (B!),\n\ningrese el numero '3'\n\n\nPara mostrar todos los resultados ingrese el numero '4'\n\nPara salir ingrese el numero '5'\n\nA continuacion escriba el numero correspondiente a las opciones mencionadas arriba: ");
        scanf("%d", &operacion);


        switch(operacion)
        {
            case 1:
               printf("A = ");
               scanf("%d", &primerOperando);
               flag1=1;
            break;



            case 2:
                printf("B = ");
                scanf("%d", &segundoOperando);
                flag2=1;
            break;



            case 3:
                if(flag1==1 && flag2==1)
                {
                    respuestaSuma = sumar(primerOperando,segundoOperando);
                    respuestaResta = restar(primerOperando, segundoOperando);
                    respuestaMultiplicacion = multiplicar(primerOperando, segundoOperando);
                    respuestaDivision = dividir(primerOperando, segundoOperando);
                    respuestaFactorialA = factorizar(primerOperando);
                    respuestaFactorialB = factorizar(segundoOperando);
                    flag3=1;
                }
                else
                {
                    printf("\n\n\nNo es posible realizar las operaciones si no ingresa los dos operandos");
                }
            break;



            case 4:
                if(flag3==0)
                {
                    printf("\n\n\nPara mostrar los resultados, debe previamente seleccionar la opcion de calcular las operaciones\n");
                }
                else
                {
                    printf("\n\n\n\nEl resultado de %d+%d es: %d\n", primerOperando, segundoOperando, respuestaSuma);



                    if (primerOperando<segundoOperando)
                    {
                        printf("El resultado de %d-%d es : para que esta operacion pueda ser realizada correctamente, el primer operando debe ser mayor que el segundo, por favor ingrese un segundo operando que sea menor al primero o ingrese un primero que sea mayor al segundo\n", primerOperando, segundoOperando);
                    }
                    else
                    {
                        printf("El resultado de %d-%d es: %d\n", primerOperando, segundoOperando, respuestaResta);
                    }



                    printf("El resultado de %d*%d es: %d\n", primerOperando, segundoOperando, respuestaMultiplicacion);


                    if(segundoOperando==0)
                    {
                        printf("El resultado de %d/%d es: no se puede realizar una division con divisor igual a cero, por favor ingrese otro valor en el segundo operando\n", primerOperando, segundoOperando);
                    }
                    else
                    {
                        printf("El resultado de %d/%d es: %f\n", primerOperando, segundoOperando, respuestaDivision);
                    }



                    printf("El factorial de %d es: %d  y el factorial de %d es: %d\n", primerOperando, respuestaFactorialA, segundoOperando, respuestaFactorialB);
                }
            break;



            case 5:
                printf("Adios");
            break;

            default:
                printf("El numero que escribio no corresponde a ninguna de las opciones, por favor ingrese un numero del 1 al 5");
            break;
        }

        printf("\n\n\n\n\n\n\n\n");

    }while(operacion!=5);


    return 0;
}
