#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

extern vector<string> livros;  // Lista externa de livros

void atualizarTituloLivro() {
    string tituloAtual, novoTitulo;
    cout << "Digite o título atual do livro: ";
    cin.ignore();
    getline(cin, tituloAtual);
    
    auto it = find(livros.begin(), livros.end(), tituloAtual);
    if (it != livros.end()) {
        cout << "Digite o novo título para o livro: ";
        getline(cin, novoTitulo);
        *it = novoTitulo;
        cout << "Título atualizado com sucesso!\n";
    } else {
        cout << "Livro não encontrado!\n";
    }
}