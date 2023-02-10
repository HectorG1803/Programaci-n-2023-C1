#include <stdio.h>

//Ordenacion por seleccion directa.

const int MAX = 100;

void Lectura(int *, int);
void Ordena(int *, int);
void Imprime(int *, int);

void main(void)
{
    int TAM, VEC[MAX];
    do
    {
        printf("\nIngrese el tamano del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM>MAX || TAM<1);
//Se verifica que el tamano del arreglo sea correcto.
    Lectura(VEC, TAM);
    Ordena(VEC, TAM);
    Imprime(VEC, TAM);
}

void Lectura(int A[], int T)
//La funcion Lectura se utiliza para leer un arreglo unidimensional de T
//elementos de tipo entero.
{
        int I;
        for (I=0; I<T; I++)
        {
            printf("Ingrese el elemento %d: ", I+1);
            scanf("%d", &A[I]);
        }

}

void Imprime (int A[], int T)
//Esta funcion se utiliza para escribir un arreglo unidimencional
//ordenando de T elementos de tipo entero.
{
    int I;
    for (I=0; I<T; I++)
        printf("\nA[%d]: %d", I, A[I]);
}

void Ordena(int A[], int T)
//La funcion Ordena utiliza el metodo de seleccion directa para ordenar
//los elementos del arrglo unidimencional A.
{
    int I, J, MEN, L;
    for (I=0; I < (T-1); I++)
    {
        MEN = A[I];
        L = I;
        for (J = (I+1); J<T; J++)
            if (A[J] < MEN)
        {
            MEN = A[J];
            L = J;
        }
        A[L] = A[I];
        A[I] = MEN;
    }
}
