#include <stdio.h>
int main()
{
    int arr[100];
    int i, num;
    printf("Ingrese el tamaño del arreglo:\n");
    scanf("%d", &num);
    for(i=0; i<num; i++){
        printf("Ingrese el %d numero: ",i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<num; i++){
        if(arr[i]%2!=0){
            printf("el número %d es impar\n",arr[i]);
        }
        if(arr[i]%2!=1){
            printf("el número %d es par\n",arr[i]);
        }
    }
}
