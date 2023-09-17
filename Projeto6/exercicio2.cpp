#include <iostream>

using namespace std;

int main() {
    // a. Declaração das variáveis int
    int a, b, c;

    // b. Solicitar ao usuário que digite dois números inteiros e atribuir a e b
    cout << "Digite o primeiro número inteiro (a): ";
    cin >> a;
    cout << "Digite o segundo número inteiro (b): ";
    cin >> b;

    // c. Atribuir a variável c o valor da expressão 4 * a + b / 3 - 5
    c = 4 * a + b / 3 - 5;
    cout << "Resultado da expressão 4 * a + b / 3 - 5: " << c << endl;

    // e. Atribuir a variável c o valor da expressão 4 * (a + b) / (3 - 5)
    c = 4 * (a + b) / (3 - 5);
    cout << "Resultado da expressão 4 * (a + b) / (3 - 5): " << c << endl;

    // f. Os resultados são diferentes devido à ordem de operações aritméticas.
    // Na primeira expressão (c), a multiplicação e a divisão são feitas antes da adição e subtração,
    // enquanto na segunda expressão (e), a adição e subtração são feitas antes da multiplicação e divisão.
    // Isso segue a precedência dos operadores em C++.
    
    // g. Recalcular o valor de c utilizando a expressão a^2 + 2 * b + c
    c = a * a + 2 * b + c;
    cout << "Resultado da expressão a^2 + 2 * b + c: " << c << endl;

    return 0;
}
