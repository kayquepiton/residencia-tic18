#include <iostream>

using namespace std;

int main() {
    int linhas = 1;
    int entrada = 4;

    string caractere = " * ";

    cout << endl;

    // Imprime um quadrado de asteriscos com tamanho 'entrada x entrada'
    for (int i = 0; i < entrada; i++) {
        for (int j = 0; j < entrada; j++) {
            cout << caractere;
        }
        cout << endl;
    }

    // Imprime uma sequência crescente de asteriscos
    for (int i = 0; i <= entrada; i++) {
        for (int j = 0; j < i; j++) {
            cout << caractere;
        }
        cout << endl;
    }

    cout << endl;

    // Imprime 'linhas' linhas de asteriscos com tamanho 'entrada'
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < entrada; j++) {
            cout << caractere;
        }
        cout << endl;
    }

    caractere = " *        * ";

    // Imprime um padrão com asteriscos e espaços
    for (int i = 0; i < entrada / 2; i++) {
        for (int j = 0; j < entrada / 4; j++) {
            cout << caractere;
        }
        cout << endl;
    }

    caractere = " * ";

    // Imprime 'linhas' linhas de asteriscos com tamanho 'entrada'
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < entrada; j++) {
            cout << caractere;
        }
        cout << endl;
    }

    return 0;
}
