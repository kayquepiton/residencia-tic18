#include <iostream>

using namespace std;

int insere_meio(int *vetor, int &qtde, int elemento) {
    if (qtde % 2 == 0) {
        // Se o vetor tem tamanho par, insira o elemento no meio
        int posicao = qtde / 2;
        for (int i = qtde; i > posicao; i--) {
            vetor[i] = vetor[i - 1];
        }
        vetor[posicao] = elemento;
    } else {
        // Se o vetor tem tamanho ímpar, insira o elemento no meio + 1
        int posicao = (qtde + 1) / 2;
        for (int i = qtde; i > posicao; i--) {
            vetor[i] = vetor[i - 1];
        }
        vetor[posicao] = elemento;
    }

    qtde++;
    return qtde;
}

int main() {
    int vetor[10] = {1, 2, 3, 4, 5, 6};
    int qtde = 6;

    int elemento;
    cout << "Digite o elemento a ser inserido no meio: ";
    cin >> elemento;

    insere_meio(vetor, qtde, elemento);

    cout << "Vetor após a inserção:" << endl;
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
