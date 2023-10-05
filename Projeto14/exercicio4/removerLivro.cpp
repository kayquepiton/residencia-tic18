#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

extern vector<string> livros;  // Lista externa de livros

void removerLivro() {
    string titulo;
    cout << "Digite o título do livro a ser removido: ";
    cin.ignore();
    getline(cin, titulo);
    
    // Procura o livro na lista
    auto it = find(livros.begin(), livros.end(), titulo);
    
    // Se encontrou, remove; caso contrário, informa que não foi encontrado
    if (it != livros.end()) {
        livros.erase(it);
        cout << "Livro removido com sucesso!\n";
    } else {
        cout << "Livro não encontrado!\n";
    }
}
