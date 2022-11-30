#include <stdio.h>
int main()
{
    int arr[100];
    int i, random, num;
    printf("Ingrese el tamaño del arreglo:\n");
    scanf("%d", &num);
    for(i=0; i<num; i++){
        printf("Ingrese el %d numero:\n",i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<num; i++){
        if(arr[i]<0){
        random=random+1;
        }
    }
        printf("Dentro del arreglo se encuentran %d números negativos",random);
}
