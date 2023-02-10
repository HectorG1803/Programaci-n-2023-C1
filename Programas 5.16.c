#include <stdio.h>

// Apuntadores y arreglos.

void main(void)
{
    int V1[4]= {2, 3, 4, 7}, V2[4]= {6};
    int *AX, *AY;

    AX = &V1[3];
    AY = &V2[2];
        V1[V2[0]-V1[2]]= *AY;
        *AY = *AX - V1[0];
    printf("\nV1[0]= %d \tV1[1]= %d \tV1[2]= %d \tV1[3]= %d \tV2[0]= %d \tV2[1]= %d \tV2[2]= %d \tV2[3]= %d", V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V1[3]);

    V2[1] = ++*AX;
    V2[3] = (*AY)++;
    printf("\nV1[0]= %d \tV1[1]= %d \tV1[2]= %d \tV1[3]= %d \tV2[0]= %d \tV2[1]= %d \tV2[2]= %d \tV2[3]= %d", V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V1[3]);

}
