#include <iostream>

using namespace std;

// Função que multiplica cada elemento de um vetor de inteiros por um número inteiro.
// Recebe um ponteiro para o vetor, a quantidade de elementos no vetor e o multiplicador.
void multiplica_por_n(int *vet, int qtde, int n) {
    for (int i = 0; i < qtde; i++) {
        vet[i] *= n;  // Multiplica o elemento do vetor pelo multiplicador.
    }
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int qtde = 5;
    int multiplicador = 3;

    cout << "Vetor original:" << endl;
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";  // Exibe o vetor original.
    }
    cout << endl;

    multiplica_por_n(vetor, qtde, multiplicador);  // Chama a função para multiplicar o vetor.

    cout << "Vetor multiplicado por " << multiplicador << ":" << endl;
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";  // Exibe o vetor após a multiplicação.
    }
    cout << endl;

    return 0;
}
