#include <stdio.h>


int main(void)
{
    int cantidad = 0;
    int n1= 0;
    int acumulado = 0;
    float promedio = 0;
    printf("ingrese la cantidad de numeros a promediar: \n");
    scanf("%d", &cantidad);

    for(int i=0; i<cantidad; i++)
    {
        printf("ingrese un numero: \n");
        scanf("%d",&n1);

        acumulado = n1 + acumulado;
        printf("El acumulado hasta ahora es: %d\n", acumulado);
    }
    promedio = ((float)acumulado/(float)cantidad);
    printf("EL promedio es: %f\n", promedio);
    
    return (0);
}