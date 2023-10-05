#include <iostream>
#include <vector>

using namespace std;

extern vector<string> livros;

void adicionarLivro() {
    string titulo;
    cout << "Digite o título do livro: ";
    cin.ignore();  // Para limpar o buffer
    getline(cin, titulo);
    livros.push_back(titulo);
    cout << "Livro adicionado com sucesso!\n";
}
