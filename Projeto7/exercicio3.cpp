#include <iostream>

using namespace std;

int main() {
    int numero;
    cin >> numero;

    // Loop para encontrar os divisores do número fornecido
    for (int i = 1; i < numero; i++) {
        // Verifica se i é um divisor de numero
        if (numero % i == 0) {
            // Imprime os divisores encontrados
            cout << i << endl;
        }
    }

    return 0;
}
