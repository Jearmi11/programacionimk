#include <stdio.h>
int main()
{
    int arr[100];
    int i, i2, num;
    printf("Ingrese el tamaño del arreglo:\n");
    scanf("%d", &num);
        printf("Ingrese %d numeros:\n",num);
    for(i=0; i<num; i++){
     scanf("%d", &arr[i]);
    }
    for(i=0; i<num; i++,i2++){
        arr[i]=arr[i2];
        printf("Valor perteneciente al arreglo 2; %d\n",arr[i2]);
    }
}
