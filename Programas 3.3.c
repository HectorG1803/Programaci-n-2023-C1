#include <stdio.h>

/* Suma pagos
El programa, al recibir como datos un conjunto de pagos realizados en el ultimo
mes, obtiene la suma de los mismos.
PAG y SPA: variables de tipo real. */

void main(void)
{
    float PAG, SPA;
        SPA = 0;
    printf("Ingrese el primer pago: \t");
    scanf("%f", &PAG);

    while (PAG)
    /*Observa que la condicion es verdadera mientras el pago es diferente de cero. */
    {
        SPA = SPA + PAG;
            printf("Ingrese el siguiente pago: \t ");
            scanf("%f", &PAG);
            /*observa que la proporsicion que modifica la condicion es una lectura. */
    }
    printf("\nEL total de pagos del mes es: %.2f", SPA);
}
