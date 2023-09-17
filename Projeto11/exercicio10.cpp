#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Função para encontrar as posições de uma letra em uma string.
// Recebe a string de entrada, a letra a ser procurada e uma referência para o tamanho.
// Retorna um vetor de inteiros com as posições onde a letra foi encontrada.
vector<int> encontraPosicoes(const string& texto, char letra, int& tamanho) {
    vector<int> posicoes;
    tamanho = 0;

    // Percorre a string caractere por caractere.
    for (int i = 0; i < texto.length(); i++) {
        // Se a letra atual for igual à letra procurada, adiciona a posição ao vetor.
        if (texto[i] == letra) {
            posicoes.push_back(i);
            tamanho++;
        }
    }

    return posicoes;
}

int main() {
    string texto;
    char letra;

    cout << "Digite uma string: ";
    cin >> texto;

    cout << "Digite uma letra: ";
    cin >> letra;

    int tamanho;
    vector<int> posicoes = encontraPosicoes(texto, letra, tamanho);

    if (tamanho == 0) {
        cout << "A letra '" << letra << "' não foi encontrada na string." << endl;
    } else {
        cout << "A letra '" << letra << "' foi encontrada nas posições: ";
        for (int i = 0; i < tamanho; i++) {
            cout << posicoes[i];
            if (i < tamanho - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }

    return 0;
}
