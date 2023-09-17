#include <iostream>
#include <string>

using namespace std;

// Função para encontrar e retornar os caracteres comuns entre duas strings.
// Recebe duas strings A e B como entrada.
// Retorna uma nova string contendo os caracteres comuns encontrados.
string caracteresComuns(const string& A, const string& B) {
    string C;  // String para armazenar os caracteres comuns.

    // Itera por cada caractere da string A.
    for (char c : A) {
        // Verifica se o caractere está presente na string B e não está em C.
        if (B.find(c) != string::npos && C.find(c) == string::npos) {
            C += c;  // Adiciona o caractere comum à string C.
        }
    }

    return C;  // Retorna a string C com os caracteres comuns.
}

int main() {
    string A, B;

    cout << "Digite a primeira string (A): ";
    getline(cin, A);

    cout << "Digite a segunda string (B): ";
    getline(cin, B);

    // Chama a função para encontrar os caracteres comuns entre A e B.
    string resultado = caracteresComuns(A, B);

    if (resultado.empty()) {
        cout << "Não há caracteres comuns entre A e B." << endl;
    } else {
        cout << "Caracteres comuns entre A e B: " << resultado << endl;
    }

    return 0;
}
