#include <iostream>

using namespace std;

int main() {
    long long int limite;
    cout << "Digite o limite superior para a sequência Fibonacci: ";
    cin >> limite;

    long long int termo1 = 0;  // Inicializa o primeiro termo da sequência Fibonacci
    long long int termo2 = 1;  // Inicializa o segundo termo da sequência Fibonacci

    cout << "Sequência Fibonacci até " << limite << ":" << endl;

    while (termo1 <= limite) {
        cout << termo1 << " ";  // Exibe o termo atual da sequência

        long long int proximo = termo1 + termo2;  // Calcula o próximo termo da sequência
        termo1 = termo2;  // Atualiza o primeiro termo
        termo2 = proximo;  // Atualiza o segundo termo
    }

    cout << endl;

    return 0;
}
