#include <stdio.h>

int main() {
    int escolha;
    float temperatura, resultado;

    printf("Escolha a conversão:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    scanf("%d", &escolha);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (escolha) {
        case 1:
            resultado = (temperatura * 9 / 5) + 32;
            printf("%.2f Celsius é equivalente a %.2f Fahrenheit.\n", temperatura, resultado);
            break;
        case 2:
            resultado = (temperatura - 32) * 5 / 9;
            printf("%.2f Fahrenheit é equivalente a %.2f Celsius.\n", temperatura, resultado);
            break;
        default:
            printf("Escolha inválida.\n");
    }

    return 0;
}