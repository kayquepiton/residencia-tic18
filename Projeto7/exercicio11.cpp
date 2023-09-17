#include <iostream>
#include <cmath>

using namespace std;

// Função para calcular o número de dígitos em um número
int contarDigitos(int numero) {
    int contador = 0;
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    return contador;
}

// Função para verificar se um número é Armstrong
bool ehArmstrong(int numero) {
    int original = numero;
    int soma = 0;
    int numDigitos = contarDigitos(numero);

    while (numero != 0) {
        int digito = numero % 10;
        soma += pow(digito, numDigitos);
        numero /= 10;
    }

    return soma == original;
}

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (ehArmstrong(numero)) {
        cout << numero << " é um número Armstrong." << endl;
    } else {
        cout << numero << " não é um número Armstrong." << endl;
    }

    return 0;
}
