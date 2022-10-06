#include <stdio.h>

int main(void)
{
    int numero = 0;

    printf("ingrese hasta donde voy a contar: \n");
    scanf("%d", &numero);

    printf("Inicia conteo... \n");

    for(int i=0; i<=numero; i++)
    {
        printf("%d\n", i);
    }

    printf("fin de conteo... \n");
    return (0);
}
