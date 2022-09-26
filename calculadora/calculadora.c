#include <stdio.h>
#include "main.h"

int main()
{
    char opcion;
    int n1, n2;

    do
    {
        printf( "\n   >>> MENU CALCULADORA <<<" );
        printf( "\n\n   1. Sumar dos nu%cmeros.", 163 );
        printf( "\n   2. Restar dos nu%cmeros.", 163 );
        printf( "\n   3. Multiplicar dos nu%cmeros.", 163 );
        printf( "\n   4. Dividir dos nu%cmeros.", 163 );
        printf( "\n   5. Salir.\n" );

        do
        {
            printf( "\n   Introduzca opci%cn (1-5): ", 162 );
            fflush( stdin );
            scanf( "%c", &opcion);

        } while ( opcion < '1' || opcion > '5' );

        switch ( opcion )
        {
            case '1': printf( "\n   Introduzca primer sumando: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca segundogcc 1 sumando: " );
                      scanf( "%d", &n2);
                      printf( "\n   %d + %d = %d\n", n1, n2, n1 + n2 );
                      break;

            case '2': printf( "\n   Introduzca minuendo: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca sustraendo: " );
                      scanf( "%d", &n2);
                      printf( "\n   %d - %d = %d\n", n1, n2, n1 - n2 );
                      break;

            case '3': printf( "\n   Introduzca primer operando: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca segundo operando: " );
                      scanf( "%d", &n2);
                      printf( "\n   %d * %d = %d\n", n1, n2, n1 * n2 );
                      break;

            case '4': printf( "\n   Introduzca dividendo: " );
                      scanf( "%d", &n1);
                      printf( "\n   Introduzca divisor: " );
                      scanf( "%d", &n2);
                      if ( n2 != 0 )
                          printf( "\n   %d div %d = %d ( Resto = %d )\n", n1, n2, n1 / n2, n1 % n2 );
                      else
                          printf( "\n   ERROR: No se puede dividir entre cero.\n" );
        }

    } while ( opcion != '5' );

    return 0;
}
