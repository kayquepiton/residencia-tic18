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

    // c. Atribuir a variável c a soma de a e b e imprimir em formato hexadecimal
    c = a + b;
    cout << "A soma de a e b em formato hexadecimal: 0x" << hex << c << dec << endl;

    // d. Atribuir a variável c o produto de a e b e imprimir em formato octal
    c = a * b;
    cout << "O produto de a e b em formato octal: " << oct << c << dec << endl;

    // e. Atribuir a variável c o módulo (valor absoluto) da diferença entre a e b
    if (a >= b) {
        c = a - b;
    } else {
        c = b - a;
    }
    cout << "O módulo da diferença entre a e b: " << c << endl;

    // g. Atribuir a variável c o quociente entre a e b (com verificação de divisão por zero)
    if (b != 0) {
        c = a / b;
        cout << "O quociente entre a e b: " << c << endl;

        // h. Verificar se a é divisível de forma exata por b
        if (a % b == 0) {
            cout << "a é divisível de forma exata por b." << endl;
        } else {
            cout << "a não é divisível de forma exata por b." << endl;
        }
    } else {
        cout << "Divisão por zero não é possível." << endl;
    }

    return 0;
}
