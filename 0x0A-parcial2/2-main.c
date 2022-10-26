#include <stdio.h>
#include <ctype.h>

int main()
{
    int hora = 0, duracion;
    float costo;
    char dia = ' ';
    
    printf("este programa calcula el costo de su llamada \n");
    printf("introduzca la hora en la que hizo la llamada en formato 24hrs\n");
    scanf("%d", &hora);
    printf("introduzca el dia en el que realizo la llamada, poniendo la inicial del dia, en el caso de miercoles es X\n");
    scanf("%s", &dia);
    printf("¿Cuantos minutos duro la llamada?\n");
    scanf("%d", &duracion);

    if(dia == 'L' || dia == 'l')
    {
        if(hora >=800 && hora <=1800)
        {
            costo = duracion * .30;
        }
        else(hora < 800 && hora > 1800);
        {
            costo = costo * 2;
        }
    }
    if(dia == 'M' || dia == 'm')
    {
        if(hora >=800 && hora <=1800)
        {
            costo = duracion * .30;
        }
        else(hora < 800 && hora > 1800);
        {
            costo = duracion * .60;
        }
    }
    if(dia == 'X' || dia == 'x')
    {
        if(hora >=800 && hora <=1800)
        {
            costo = duracion * .30;
        }
        else(hora < 800 && hora > 1800);
        {
            costo = duracion * .60;
        }
    }
    if(dia == 'J' || dia == 'j')
    {
        if(hora >=800 && hora <=1800)
        {
            costo = duracion * .30;
        }
        else(hora < 800 && hora > 1800);
        {
            costo = duracion * .60;
        }
    }
    if(dia == 'V' || dia == 'v')
    {
        if(hora >=800 && hora <=1800)
        {
            costo = duracion * .30;
        }
        else(hora < 800 || hora > 1800);
        {
            costo = duracion * .60;
        }
    }
    if(dia == 'S' || dia == 's')
    {
        costo = duracion * .15;
    }
    if(dia == 'D' || dia == 'd')
    {
        costo = duracion * .15;
    }

    printf("el costo de la llamada es de %f\n", costo);
}
        