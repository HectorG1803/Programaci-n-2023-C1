#include <stdio.h>

void main (void)
{
    float PRO;
    printf ("Ingrese el promedio del alumno: ");
    scanf ("%f", &PRO);

        if (PRO >= 6)
            printf ("\nAprobado");
        if (PRO <= 5)
            printf ("\nReprobado");
}
