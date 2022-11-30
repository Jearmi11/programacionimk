#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i, num, Num, pos;
    printf("Introduzca el tamaño del arreglo:\n");
    scanf("%d", &num);
    printf("Ingrese %d numeros cualesquiera:\n",num);
    for(i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    printf("Ingrese el número a ingresar:\n");
    scanf("%d", &Num);
    printf("Ingrese la posicion en la que desea insertar el número:\n");
    scanf("%d", &pos);
    if(pos < num){
        for(i=num; i>=pos; i--){
            arr[i] = arr[i-1];
        }
        arr[pos-1] = Num;
        num++;
        printf("El nuevo arreglo queda:\n ");
        for(i=0; i<num; i++){
            printf("%d   ", arr[i]);
        }
    } 
}
