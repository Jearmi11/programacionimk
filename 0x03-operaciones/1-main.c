#include <stdio.h>
#include "main.h"


int main()
{
    float largo, ancho, result;
  
    printf("introduce el largo del rectangulo: ");
    scanf("%f", &largo);
    printf("introduce el ancho del rectangulo: ");
    scanf("%f", &ancho);

    result = perimeter(largo, ancho);

    printf("el perimetro es de = %f \n", result);

    return 0;
}
