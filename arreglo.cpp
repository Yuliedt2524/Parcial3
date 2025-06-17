#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, i;
  int *arr;

  printf("Ingrese el tamaño del arreglo: ");
  scanf("%d", &x);
  arr = (int *)malloc(x * sizeof(int));
  if (arr == NULL) {
  }
  printf("Ingrese los elementos del arreglo:\n");
  for (i = 0; i < x; i++) {
    printf("Elemento %d: ", i);
    scanf("%d", arr + i);
  }
  printf("Elementos del arreglo:\n"); 
    for(i = 0; i < x; i++){
    printf("Elemento %d: %d\n", i, *(arr + i));
  }
  return 0;
}