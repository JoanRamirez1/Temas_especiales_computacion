
float sumar();
int sumar(int a, int b) {
    return a + b;
}

#include <stdio.h>

// Declaración de la función
int sumar(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 10;
    int num2 = 5;
    
    // Llamada a la función
    int resultado = sumar(num1, num2);
    
    printf("La suma de %d y %d es: %d\n", num1, num2, resultado);
    
    return 0;
}
int multiplicar(int a, int b) {
    return a * b;
}
