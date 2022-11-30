#include <stdio.h>
int main()
{
    int arr[100];
    int i, maximo, minimo, cant;
    printf("Ingrese el tamaño del array:\n");
    scanf("%d", &cant);
    maximo = arr[0];
    minimo = arr[1];
    for(i=0; i<cant; i++){
        printf("Ingrese la cantidad numero %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    for(i=1; i<cant; i++){
        if(arr[i]>maximo)
        {
            maximo = arr[i];
        }
        if(arr[i]<minimo)
        {
            minimo = arr[i];
        }
    }
    printf("El numero minimo dentro del array es :%d\n", minimo);
    printf("El numero maximo ingresado es: %d\n", maximo);
}
