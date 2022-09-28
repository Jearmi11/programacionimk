#include <stdio.h>
#include <math.h>
#include "main.h"

int main()
{
    //declaro variables//
    float vol, densidad, costo;
    char opcion;

    //se imprime en pantalla//
    printf("Elige el tipo de producto:\n");
    printf("a - Aceite\n");
    printf("b - Alcohol\n");
    printf("c - Gasolina\n");
    printf("d - Acetona\n");
    scanf("%c", &opcion);

    printf("Ingresa el volumen a envasar:\n");
    scanf("%f", &vol);



    
    // empieza switch case//
    switch(opcion)
    {
        case 'a': 
        densidad = 0.9;
        area(vol, densidad, costo);
        break;
        case 'b': 
        densidad = 0.8;
        area(vol, densidad, costo);
        break;
        case 'c': 
        densidad = 0.68;
        area(vol, densidad, costo);
        break;
        case 'd': 
        densidad = 0.79;
        area(vol, densidad, costo);
        break;
        default:
        printf("Opción no válida\n");
        break;
    }

}