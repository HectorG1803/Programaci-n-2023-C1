#include <stdio.h>

/* Conflicto de variables con el mismo nombre. */

void f1(void);          /*Prototipo de funcion. */
int K = 5;              /*Variable global. */

void main(void)
{
    int I;
    for (I = 1; I <= 3; I++)
        f1();
}

void f1(void)
/*La funcion utiliza tanto la variable local I como la variable globl I*/
{
    int k = 2;          /*Variable local. */
    k += k;
    printf("\n\nEl valor de la variable local es: %d", k);
    K = K + k;      /*Uso de ambas variables. */
    printf("\nEl valor de la variable global es: %d", K);
}
