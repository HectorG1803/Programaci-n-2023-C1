#include <stdio.h>

/* Prueba de variables globales, locales y estaticas.
El programa utiliza funciones en las que se usan diferentes tipos de variables. */

int f1(void);
int f2(void);
int f3(void);       /*Prototipos de funciones. */
int f4(void);

int K = 3;

void main(void)
{
     int I;
     for (I = 1; I <= 3; I++)
    {
        printf("\nEl resultado de la funcion f1 es: %d", f1());
        printf("\nEl resultado de la funcion f2 es: %d", f2());
        printf("\nEl resultado de la funcion f3 es: %d", f3());
        printf("\nEl resultado de la funcion f4 es: %d", f4());
    }
}

int f1(void)
/*La funcion f1 utiliza la variable global. */
{
    K += K;
    return (K);
}

int f2(void)
/*La funcion f2 utiliza la variable local. */
{
    int k = 1;
    k++;
    return (k);
}

int f3(void)
/*La funcion f3 utiliza la variable estatica. */
{
    static int k = 8;
    k += 2;
    return (k);
}

int f4(void)
/*La funcion f4 utiliza dos variables con el mismo nombre: local y global. */
{
    int k = 5;
    k = k + K;              /*uso de la variable local (k) y global (K) */
    return (k);
}
