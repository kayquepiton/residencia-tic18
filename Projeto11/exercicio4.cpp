#include <iostream>

using namespace std;

// Função que recebe dois inteiros por referência, calcula a soma e a subtração e atualiza os valores.
void calcula(int &X, int &Y) {
    int soma = X + Y;       // Calcula a soma dos valores X e Y.
    int subtracao = X - Y;  // Calcula a subtração de X por Y.

    X = soma;               // Atualiza o valor de X com a soma.
    Y = subtracao;          // Atualiza o valor de Y com a subtração.
}

int main() {
    int X, Y;

    cout << "Digite dois números inteiros (X e Y): ";
    cin >> X >> Y;

    calcula(X, Y);  // Chama a função para calcular a soma e a subtração dos números.

    cout << "X (soma): " << X << endl;
    cout << "Y (subtração): " << Y << endl;

    return 0;
}
