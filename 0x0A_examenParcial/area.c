#include <stdio.h>
#include <math.h>
#include "main.h"


int area(float volumen, float densidad, float costoAnterior)
{
    // declaro variables//
    float area, radio, y;
    float gr;
    float pi = 3.1416;
    float costo, costm2 = 2.45;

    // empiezan operaciones //
    radio = cbrt((2*volumen)/(4*pi));  

    area = (2*pi*(pow(radio,2)) + 2*pi*radio*(volumen/(pi*pow(radio,2))));


    costo = area * costm2;
    costo = costo/1000;

    gr = volumen * densidad;
    float ahorro = costoAnterior - costo;

    // imprime en pantalla //

    printf("Area de la lata: %0.2f cm2\n", area);   
    printf("Costo de fabricacion: $ %0.2f\n", costo);     
    printf("Costo anterior de fabricación de una lata de %0.f ml: $ %0.2f\n", volumen, costoAnterior);
    printf("Se ahorro: $ %0.2f\n", ahorro);
    printf("%0.f ml en gramos = %0.2f gr\n",volumen,gr);

}

   