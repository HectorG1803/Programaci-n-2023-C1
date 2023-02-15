#include <stdio.h>

int main() {
   int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
   int b[10] = {5, 15, 25, 35, 45, 50, 65, 70, 75, 80};
   int n = sizeof(a) / sizeof(b[0]);
   int sum[n];

   for (int i = 0; i < n; i++) {
      sum[i] = a[i] + b[n - i - 1];
   }

   printf("/nLa suma de los resultados: ");
   for (int i = 0; i < n; i++) {
      printf("%d ", sum[i]);
   }
   return 0;
}
