#include <stdio.h>
#include "main.h"

 void cubo(int a)
{

    for(int i=0;i<=a; i++)
    {
        printf("El cubo del %d es: %d \n", i, i*i*i);
    }
}