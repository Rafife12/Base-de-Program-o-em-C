#include <iostream>
using namespace std;

int main() {
    float a, b;
    char op;

    cout << "Digite o primeiro número: ";
    cin >> a;
    cout << "Digite o operador (+, -, *, /): ";
    cin >> op;
    cout << "Digite o segundo número: ";
    cin >> b;

    switch (op) {
        case '+': cout << "Resultado: " << a + b << endl; break;
        case '-': cout << "Resultado: " << a - b << endl; break;
        case '*': cout << "Resultado: " << a * b << endl; break;
        case '/': 
            if (b != 0)
                cout << "Resultado: " << a / b << endl;
            else
                cout << "Erro: divisão por zero!" << endl;
            break;
        default: cout << "Operador inválido!" << endl;
    }

    return 0;
}