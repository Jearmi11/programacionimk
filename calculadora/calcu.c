#include <stdio.h>
#include "main.h"


int main()
{
    int n1;
    int n2;
    float resultado;

    char opcion;

    printf("Elija la operación a realizar: \n");
    printf("a - suma \n");
    printf("b - resta \n");
    printf("c - multiplicacion \n");
    printf("d - división \n");
    printf("e - modulo \n");
    scanf("%c",&opcion);

    printf("\n ingrese el primer número: \n");
    scanf("%d",&n1);
    printf("\n ingrese el segundo número: \n");
    scanf("%d",&n2);

    switch (opcion)
    {
        case 'a':
        resultado = add(n1, n2);
        break;
        case 'b':
        resultado = resta(n1, n2);
        break;
        case 'c':
        resultado = mul(n1, n2);
        break;
        case 'd':
        resultado = div(n1, n2);
        break;
        case 'e':
        resultado = mod(n1, n2);
        break;
        default:
        printf("Opcion no valida\n");
        return(1);
    }
    printf("El resultado es: %.2f\n",resultado);
}
