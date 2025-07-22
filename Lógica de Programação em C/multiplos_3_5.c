#include <stdio.h>

int main() {
    int limite, soma = 0;

    printf("Digite um número para calcular a soma dos múltiplos de 3 e 5: ");
    scanf("%d", &limite);

    for (int i = 1; i <= limite; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

    printf("A soma dos múltiplos de 3 e 5 até %d é: %d\n", limite, soma);

    return 0;
}