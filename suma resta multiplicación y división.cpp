#include <stdio.h>

int main() {
    double num1, num2, resultado;
    char operacion;

    printf("Calculadora simple en C\n");
    printf("Operaciones disponibles: +  -  *  /\n");

    printf("Introduce el primer número: ");
    scanf("%lf", &num1);

    printf("Introduce la operación (+, -, *, /): ");
    scanf(" %c", &operacion); 
    
    printf("Introduce el segundo número: ");
    scanf("%lf", &num2);

    switch(operacion) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            } else {
                printf("Error: división por cero no permitida.\n");
            }
            break;
        default:
            printf("Operación no válida.\n");
    }

    return 0;
}