#include <stdio.h>

int calcularFatorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1;
    } else {
        return numero * calcularFatorial(numero - 1);
    }
}

int main() {
    int x;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &x);

    if (x < 0) {
        printf("O fatorial não está definido para números negativos.\n");
    } else {
        int resultado = calcularFatorial(x);
        printf("O fatorial de %d é: %d\n", x, resultado);
    }

    return 0;
}