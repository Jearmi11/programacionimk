#include <stdio.h>

int main() {
int a[1000],i,n;  
 
     printf("Ingrese la cantidad de arreglos que se desea: ");
    scanf("%d",&n);
 
     printf("Ingrese %d elementos para cada arreglo: ", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
 
    printf("\nLa cantidad de elementos en el arreglon son: ");
    for(i=0;i<n;i++)
 
    {
        printf("%d  ", a[i]);
    }
 
    return 0;
}
