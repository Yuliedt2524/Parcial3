#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    char *arreglo;
    char *ptr;
    int i;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);
    arreglo = (char *)malloc(x * sizeof(char));
    if (arreglo == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
     }   
    printf("Ingrese las letras del arreglo:\n");
    ptr = arreglo;
    for (i = 0; i < x; i++) {
        scanf(" %c", ptr); 
        ptr++;
    }
    printf("Arreglo en forma inversa:\n");
    ptr = arreglo + x - 1;
    for (i = 0; i < x; i++) {
        printf("%c ", *ptr);
        ptr--;
    }
    printf("\n");

    free(arreglo);

    return 0;
}