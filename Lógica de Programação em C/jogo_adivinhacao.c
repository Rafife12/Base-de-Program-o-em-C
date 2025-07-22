#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int numeroAleatorio = rand() % 100 + 1;
    int palpite, tentativas = 0;

    printf("Bem-vindo ao Jogo de Adivinhação de Números!\n");
    printf("Tente adivinhar o número entre 1 e 100.\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        tentativas++;

        if (palpite == numeroAleatorio) {
            printf("Parabéns! Você acertou o número em %d tentativas.\n", tentativas);
        } else if (palpite < numeroAleatorio) {
            printf("Tente novamente. O número é maior.\n");
        } else {
            printf("Tente novamente. O número é menor.\n");
        }

    } while (palpite != numeroAleatorio);

    return 0;
}