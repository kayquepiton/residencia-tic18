#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void adicionarLivro(vector<string>& livros) {
    cout << "\n=== Adicionando Livros ===";
    string titulo;
    cout << "\nDigite o titulo do livro: ";
    getline(cin, titulo);
    livros.push_back(titulo);
    cout << "Livro adicionado com sucesso!\n";
}

void listarLivros(const vector<string>& livros) {
    cout << "\n=== Listando Livros ===";
    if (livros.empty()) {
        cout << "\nBiblioteca vazia!";
    } else {
        cout << "\nLivros na Biblioteca:";
        for (const auto& livro : livros) {
            cout << "\n- " << livro;
        }
    }
    cout << endl;
}

void pesquisarLivro(const vector<string>& livros) {
    cout << "\n=== Pesquisando Livro ===";
    string titulo;
    cout << "\nDigite o titulo do livro a ser pesquisado: ";
    getline(cin, titulo);
    auto it = find(livros.begin(), livros.end(), titulo);
    if (it != livros.end()) {
        cout << "Livro encontrado!\n";
    } else {
        cout << "Livro nao encontrado!\n";
    }
}

void removerLivro(vector<string>& livros) {
    cout << "\n=== Removendo Livro ===";
    string titulo;
    cout << "\nDigite o titulo do livro a ser removido: ";
    getline(cin, titulo);
    auto it = find(livros.begin(), livros.end(), titulo);
    if (it != livros.end()) {
        livros.erase(it);
        cout << "Livro removido com sucesso!\n";
    } else {
        cout << "Livro nao encontrado!\n";
    }
}

void atualizarTituloLivro(vector<string>& livros) {
    cout << "\n=== Atualizando titulo do Livro ===";
    string tituloAtual, novoTitulo;
    cout << "\nDigite o titulo atual do livro: ";
    getline(cin, tituloAtual);
    auto it = find(livros.begin(), livros.end(), tituloAtual);
    if (it != livros.end()) {
        cout << "\nDigite o novo titulo para o livro: ";
        getline(cin, novoTitulo);
        *it = novoTitulo;
        cout << "Titulo atualizado com sucesso!\n";
    } else {
        cout << "Livro nao encontrado!\n";
    }
}

int main() {
    vector<string> livros;

    // Adicionando dois novos livros à biblioteca
    adicionarLivro(livros);
    adicionarLivro(livros);

    // Listando todos os livros presentes na biblioteca
    listarLivros(livros);

    // Pesquisando um livro pelo título
    pesquisarLivro(livros);

    // Atualizando o título de um livro existente
    atualizarTituloLivro(livros);

    // Removendo um livro pelo título
    removerLivro(livros);

    // Listando os livros após remoção
    listarLivros(livros);

    return 0;
}

