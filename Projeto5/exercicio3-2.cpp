#include <iostream>
#include <limits> // Inclua a biblioteca limits para utilizar numeric_limits

using namespace std;

int main() {
    // a. Solicitar ao usuário um número inteiro e armazená-lo em uma variável int
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // b. Determinar se o valor pode ser representado como short int e imprimir a mensagem apropriada
    string mensagem = (numero > numeric_limits<short>::max()) ? "é maior que um short int" : "pertence ao intervalo dos short int";
    
    cout << "O valor fornecido (" << numero << ") " << mensagem << endl;

    return 0;
}
