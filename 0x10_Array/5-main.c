#include <stdio.h>
#define MAX_SIZE 1000
int main(){
    int arr[MAX_SIZE];
    int num, max=0, min=arr[1];
    printf("Ingrese la cantidad de numeros a ingresar\n");
    scanf("%d", &num);
    printf("Ingrese %d numeros:\n",num);
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<num; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<max && arr[i]>min){
            min = arr[i];
        }
    }
    printf("El segundo número más grande ingresado es: %d\n",min);
}
