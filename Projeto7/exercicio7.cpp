#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Entre com um número: ";
    cin >> numero;

    int ascii = 64;

    // Loop externo para controlar o número de linhas
    for (int i = 0; i <= numero; i++) {
        // Loop interno para controlar o número de caracteres por linha
        for (int j = 0; j < i; j++) {
            ascii += 1;
            char caractere = static_cast<char>(ascii);

            // Imprime o caractere
            cout << caractere;
        }
        cout << endl;  // Muda para a próxima linha após imprimir os caracteres
    }

    return 0;
}
