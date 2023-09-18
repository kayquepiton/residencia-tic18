#include <iostream>

using namespace std;

int main() {
    // a. Declaração das variáveis char
    char ch1, ch2, ch3;

    // b. Solicitar ao usuário que digite dois caracteres e atribuir a ch1 e ch2
    cout << "Digite o primeiro caractere: ";
    cin >> ch1;
    cout << "Digite o segundo caractere: ";
    cin >> ch2;

    // c. Atribuir a ch3 o caractere que antecede ch1 e imprimir em formatos diferentes
    ch3 = (ch1 - 1);
    cout << "Caractere antes de ch1 (decimal): " << static_cast<int>(ch3) << endl;
    cout << "Caractere antes de ch1 (octal): " << oct << static_cast<int>(ch3) << endl;
    cout << "Caractere antes de ch1 (hexadecimal): " << hex << static_cast<int>(ch3) << endl;
    cout << "Caractere antes de ch1: " << ch3 << endl;

    // d. Atribuir a ch3 o caractere que precede ch2 e imprimir em formatos diferentes
    ch3 = (ch2 - 1);
    printf("Caractere antes de ch2 (decimal): %d\n", ch3);
    printf("Caractere antes de ch2 (octal): %o\n", ch3);
    printf("Caractere antes de ch2 (hexadecimal): %x\n", ch3);
    cout << "Caractere antes de ch2: " << ch3 << endl;

    // e. Atribuir a ch3 'A' se ch1 for uma letra maiúscula, caso contrário, ' '
    ch3 = (isupper(ch1) ? 'A' : ' ');

    // Imprimir o valor de ch3
    cout << "Valor de ch3 após verificação de ch1: " << ch3 << endl;

    // f. Atribuir a ch3 'a' se ch2 for uma letra minúscula, caso contrário, ' '
    ch3 = (islower(ch2) ? 'a' : ' ');

    // Imprimir o valor de ch3
    cout << "Valor de ch3 após verificação de ch2: " << ch3 << endl;

    // g. Atribuir a ch3 '1' se ch1 ou ch2 for um dígito, caso contrário, ' '
    ch3 = (isdigit(ch1) || isdigit(ch2) ? '1' : ' ');

    // Imprimir o valor de ch3
    cout << "Valor de ch3 após verificação de dígitos: " << ch3 << endl;

    return 0;
}
