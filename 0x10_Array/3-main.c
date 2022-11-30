#include <stdio.h>
int main()
{
    int arr[1000];
    int i; 
    int cant;
    int sum=0;
    printf("ingrese la cantidad de numeros a ingresar:\n");
    scanf("%d", &cant);
    printf("Introduzca %d numeros de su eleccion:\n", cant);
    for(i=0; i<cant; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<cant; i++){
        sum = sum + arr[i];
    }
    printf("La suma de los numeros ingresados es:\n%d", sum);
}
