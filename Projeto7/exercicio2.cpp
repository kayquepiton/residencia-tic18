#include <iostream>
#include <algorithm>  // Para a função reverse

using namespace std;

// Função para verificar se um número é palíndromo
bool eh_palindromo(int numero) {
    // Inicialmente, assumimos que não é um palíndromo
    bool palindromo = false;

    // Converte o número em uma string para facilitar a verificação
    string numero_string = to_string(numero);

    // Cria uma cópia reversa da string do número
    string numero_string_reversa = numero_string;
    reverse(numero_string_reversa.begin(), numero_string_reversa.end());

    // Compara a string original com a string reversa
    if (numero_string == numero_string_reversa)
        palindromo = true;

    return palindromo;
}

int main() {
    int numero;
    cin >> numero;

    // Verifica se o número é palíndromo usando a função
    if (eh_palindromo(numero)) {
        cout << "É um número palíndromo." << endl;
    } else {
        cout << "Não é um número palíndromo." << endl;
    }

    return 0;
}
