#include <stdio.h>
int main()
{
    int arr[100]; 
    int i;
    int num;
    printf("ingrese la cantidad de números a ingresar:\n");
    scanf("%d", &num);

    for(i=0; i<num; i++)
    {
        printf("Introduzca la cantidad numero %d :\n",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Los numeros negativos dentro del arreglo son:\n");
    for(i=0; i<num; i++)
    {
        if(arr[i]<0)
        {
            printf(" %d ", arr[i]);
        }
    }
}
