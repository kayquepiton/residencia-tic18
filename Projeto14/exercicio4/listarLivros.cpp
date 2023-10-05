#include <iostream>
#include <vector>
using namespace std;

extern vector<string> livros;  // Lista externa de livros

void listarLivros() {
    cout << "Livros na Biblioteca:\n";
    
    // Exibe cada livro da lista
    for (const auto& livro : livros) {
        cout << "- " << livro << "\n";
    }
}
