#include <iostream>
#include <string>

using namespace std;

// Função para codificar uma string substituindo cada letra pela letra seguinte.
// Recebe a string de entrada.
// Retorna a string codificada.
string codificar(const string& texto) {
    string resultado = texto;

    // Itera por cada caractere da string.
    for (char& c : resultado) {
        // Verifica se o caractere é uma letra.
        if (isalpha(c)) {
            // Caso seja 'Z', substitui por 'A'.
            if (c == 'Z') {
                c = 'A';
            }
            // Caso seja 'z', substitui por 'a'.
            else if (c == 'z') {
                c = 'a';
            }
            // Caso contrário, incrementa o caractere.
            else {
                c++;
            }
        }
    }

    return resultado;
}

// Função para decodificar uma string substituindo cada letra pela letra anterior.
// Recebe a string de entrada.
// Retorna a string decodificada.
string decodificar(const string& texto) {
    string resultado = texto;

    // Itera por cada caractere da string.
    for (char& c : resultado) {
        // Verifica se o caractere é uma letra.
        if (isalpha(c)) {
            // Caso seja 'A', substitui por 'Z'.
            if (c == 'A') {
                c = 'Z';
            }
            // Caso seja 'a', substitui por 'z'.
            else if (c == 'a') {
                c = 'z';
            }
            // Caso contrário, decrementa o caractere.
            else {
                c--;
            }
        }
    }

    return resultado;
}

int main() {
    string texto;

    cout << "Digite uma string: ";
    getline(cin, texto);

    // Codifica o texto.
    string textoCodificado = codificar(texto);
    // Decodifica o texto codificado.
    string textoDecodificado = decodificar(textoCodificado);

    cout << "Texto Codificado: " << textoCodificado << endl;
    cout << "Texto Decodificado: " << textoDecodificado << endl;

    return 0;
}
