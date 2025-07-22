#include <iostream>
using namespace std;

int main() {
    int n, soma = 0;
    cout << "Digite um número: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }
    cout << "Soma dos múltiplos de 3 ou 5 até " << n << " é: " << soma << endl;
    return 0;
}