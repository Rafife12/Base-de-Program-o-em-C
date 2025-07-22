#include <iostream>
using namespace std;

int main() {
    int n, i, contador = 0;
    cout << "Digite um número: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            contador++;
        }
    }
    if (contador == 2)
        cout << n << " é primo!" << endl;
    else
        cout << n << " não é primo." << endl;
    return 0;
}