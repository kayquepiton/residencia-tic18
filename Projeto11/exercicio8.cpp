#include <iostream>
#include <cmath>

using namespace std;

// Função para verificar se um número é primo.
// Recebe um número inteiro e retorna verdadeiro se for primo, falso caso contrário.
bool eh_primo(int num) {
    if (num <= 1) {
        return false;  // 1 e números negativos não são primos.
    }
    if (num == 2) {
        return true;  // 2 é primo.
    }
    if (num % 2 == 0) {
        return false;  // Números pares (exceto 2) não são primos.
    }
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;  // Se for divisível por algum ímpar até a raiz quadrada, não é primo.
        }
    }
    return true;  // Se não foi encontrado divisor, é primo.
}

// Função para contar quantos números primos existem em um vetor de inteiros.
// Recebe um ponteiro para o vetor e a quantidade de elementos no vetor.
// Retorna o número de elementos primos no vetor.
int conta_primos(int *vet, int qtde) {
    int contador = 0;
    for (int i = 0; i < qtde; i++) {
        if (eh_primo(vet[i])) {
            contador++;  // Incrementa o contador se o elemento for primo.
        }
    }
    return contador;
}

int main() {
    int vetor[] = {2, 3, 5, 6, 7, 8, 11};
    int qtde = 7;

    int quantidade_primos = conta_primos(vetor, qtde);

    cout << "Quantidade de números primos no vetor: " << quantidade_primos << endl;

    return 0;
}
