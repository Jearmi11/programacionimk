#include <stdio.h>
#include <math.h>
#include "main.h"

int area(float vol, float densidad, float costoAnterior)
{
    // costos anteriores// 
    if (vol == 500)
    {
    costoAnterior = 1.006;
    }
    if (vol == 1000)
    {
    costoAnterior = 1.6816;
    }
    if (vol == 1500)
    {
    costoAnterior = 1.9610;
    }
    if (vol == 3000)
    {
    costoAnterior = 3.1038;
    }



    // declaro variables//
    float gr, ahorro, area, radio, costo;
    float costm2 = 2.45;

    // empiezan operaciones //
    radio = cbrt((2*vol)/(4*3.1416));  
    float a = 2*3.1416*pow(radio, 2);
    float b = 2*3.1416*radio;
    float c = (vol)/(3.1416*pow(radio, 2));
    area = a + b*c;

    costo = area * costm2;
    costo = costo/1000;

    gr = vol * densidad;
    ahorro = costoAnterior - costo;

    // imprime en pantalla //

    printf("Area de la lata: %0.2f cm2\n", area);   
    printf("Costo de fabricacion: $ %0.2f\n", costo);     
    printf("Costo anterior de fabricación de una lata de %0.f ml: $ %0.2f\n", vol, costoAnterior);
    printf("Se ahorro: $ %0.2f\n", ahorro);
    printf("%0.f ml en gramos = %0.2f gr\n",vol,gr);

}

   