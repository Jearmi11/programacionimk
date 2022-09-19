#include "main.h"
#include <stdio.h>

int main (void)
{
    int resultado = 1;

    resultado = mul(15,1);
    printf("el resultado de la mutiplicación es: %d\n", resultado);
    resultado = mul(0,25);
    printf("el resultado de la multiplicación es: %d\n",resultado);
    resultado = mul(-10,-7);
    printf("el resultado de la multiplicación es: %d\n",resultado);
    return 0;
}
