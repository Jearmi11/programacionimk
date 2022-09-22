#include <stdio.h>
#include "main.h"


int main()
{
    float largo, ancho, resultado;
   

    printf("ingresa el largo del rectangulo: ");
    scanf("%f", &largo);
    printf("ingresa el ancho del rectangulo:");
    scanf("%f", &width);

    result = area(largo, ancho);

    printf("el area del rectangulo es= %f \n", result);

    return 0;
}
