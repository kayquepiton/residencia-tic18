#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> livros; // Lista de livros

// Protótipos das funções
void adicionarLivro();
void removerLivro();
void pesquisarLivro();
void listarLivros();
void atualizarTituloLivro();

int main() {
    // Testando a função adicionarLivro
    cout << "=== Teste: Adicionando Livros ===\n";
    adicionarLivro();  // Espera-se que o usuário insira um título
    adicionarLivro();  // Espera-se que o usuário insira outro título
    
    // Testando a função listarLivros
    cout << "=== Teste: Listando Livros ===\n";
    listarLivros();    // Deve mostrar os livros adicionados anteriormente

    // Testando a função pesquisarLivro
    cout << "=== Teste: Pesquisando Livro ===\n";
    pesquisarLivro();  // Espera-se que o usuário insira um dos títulos previamente adicionados ou outro

    // Testando a função atualizarTituloLivro
    cout << "=== Teste: Atualizando Título do Livro ===\n";
    atualizarTituloLivro();  // Espera-se que o usuário insira o título atual e o novo título

    // Testando a função removerLivro
    cout << "=== Teste: Removendo Livro ===\n";
    removerLivro();    // Espera-se que o usuário insira um dos títulos previamente adicionados

    // Listando livros após remoção
    cout << "=== Teste: Listando Livros Após Remoção ===\n";
    listarLivros();    // Deve mostrar os livros restantes

    return 0;
}