#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;

    cout << "Digite o seu nome: ";
    cin >> nome;

    // Verificando se o nome está vazio
    if (nome.empty()) {
        cerr << "Erro: O nome não pode estar vazio." << endl;
        return 1; // Sair do programa com código de erro
    }

    cout << "Bom dia, " << nome << "!" << endl;

    return 0;
}
