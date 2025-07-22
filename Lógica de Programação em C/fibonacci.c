#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int z;

    printf("Digite o número de termos da série Fibonacci (Z): ");
    scanf("%d", &z);

    printf("Série Fibonacci com %d termos:\n", z);
    for (int i = 0; i < z; ++i) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");

    return 0;
}