#include <stdio.h>

#define N 100

int main() {
  int A[N];
  int n, i;

  // Pedimos al usuario el número de años a ingresar
  printf("Ingrese el número de años a verificar: ");
  scanf("%d", &n);

  // Pedimos al usuario que ingrese los años a verificar
  printf("Ingrese los años a verificar:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  // Se verifica si son bisiestos y se imprimen los que sí
  printf("Años bisiestos:\n");
  for (i = 0; i < n; i++) {
    if ((A[i] % 4 == 0 && A[i] % 100 != 0) || A[i] % 400 == 0) {
      printf("%d\n", A[i]);
    }
  }

  return 0;
}
