#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

extern vector<string> livros;

void pesquisarLivro() {
    string titulo;
    cout << "Digite o título do livro a ser pesquisado: ";
    cin.ignore();
    getline(cin, titulo);
    
    // Procura pelo título no vetor 'livros'.
    auto it = find(livros.begin(), livros.end(), titulo);
    
    // Verifica se encontrou o livro.
    if (it != livros.end()) {
        cout << "Livro encontrado!\n";
    } else {
        cout << "Livro não encontrado!\n";
    }
}
