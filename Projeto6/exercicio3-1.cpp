#include <iostream>

using namespace std;

int main() {
    // a. Solicitar ao usuário dois números inteiros e armazená-los em duas variáveis
    int numero1, numero2;
    cout << "Digite o primeiro número inteiro: ";
    cin >> numero1;
    cout << "Digite o segundo número inteiro: ";
    cin >> numero2;

    // b. Imprimir o maior número seguido das palavras "e maior" ou a mensagem "estes números são iguais"
    (numero1 > numero2) ? cout << numero1 << " e maior" << endl : (numero1 < numero2) ? cout << numero2 << " e maior" << endl : cout << "estes números são iguais" << endl;

    // c. Identificar se o maior valor é par ou ímpar
    int maior = (numero1 > numero2) ? numero1 : numero2;

    if (maior % 2 == 0) {
        cout << "O maior valor (" << maior << ") é par." << endl;
    } else {
        cout << "O maior valor (" << maior << ") é ímpar." << endl;
    }

    return 0;
}
