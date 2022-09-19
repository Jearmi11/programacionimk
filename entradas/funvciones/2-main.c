#include "main.h" 
#include <stdio.h>
/**
* Calculadora
* return: 0 if succeed
*
*/
int main(void)
{
    int suma;
    int rest;

    suma = add(22, 10);
    rest = resta(22, 10);
    printf("El resultadode la suma es: %d\nEl resultado de la resta es: %d\n",suma, rest);

    return 0;
}
