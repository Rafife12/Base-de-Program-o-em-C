#include <iostream>
using namespace std;

int main() {
    int opcao;
    float temp, convertido;

    cout << "1 - Celsius para Fahrenheit\n";
    cout << "2 - Fahrenheit para Celsius\n";
    cout << "Escolha uma opção: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << "Digite a temperatura em Celsius: ";
            cin >> temp;
            convertido = (temp * 9 / 5) + 32;
            cout << "Temperatura em Fahrenheit: " << convertido << endl;
            break;
        case 2:
            cout << "Digite a temperatura em Fahrenheit: ";
            cin >> temp;
            convertido = (temp - 32) * 5 / 9;
            cout << "Temperatura em Celsius: " << convertido << endl;
            break;
        default:
            cout << "Opção inválida." << endl;
    }
    return 0;
}