#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Entre com um número: ";
    cin >> numero;
    int somatorio = 0;

    // Calcula a soma dos divisores próprios do número
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            somatorio += i;
        }
    }

    // Verifica se o número é perfeito ou não
    if (somatorio == numero) {
        cout << numero << " é um número perfeito!\n";
    } else {
        cout << numero << " não é um número perfeito!\n";
    }

    return 0;
}
