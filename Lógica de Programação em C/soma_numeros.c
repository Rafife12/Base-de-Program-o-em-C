#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite o número que você deseja calcular a soma de 1 até ele: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++) {
        soma += i;
    }

    printf("A soma de 1 até %i é: %i\n", n, soma);

    return 0;
}