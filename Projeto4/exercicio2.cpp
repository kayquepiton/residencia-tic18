#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // a. Imprimir cada caractere numérico e seu código numérico
    for (char c = '0'; c <= '9'; ++c) {
        cout << "'" << c << "' - " << static_cast<int>(c) << endl;
    }

    // b. Imprimir o código numérico em octal e hexadecimal
    for (char c = '0'; c <= '9'; ++c) {
        cout << "'" << c << "' - " << static_cast<int>(c)
             << " (Octal: " << oct << static_cast<int>(c)
             << ", Hexadecimal: " << hex << static_cast<int>(c) << dec << ")" << endl;
    }

    // c. Ler um caractere e imprimir no mesmo formato
    char input_char;
    cout << "Digite um caractere: ";
    cin >> input_char;
    cout << "'" << input_char << "' - " << static_cast<int>(input_char)
         << " (Octal: " << oct << static_cast<int>(input_char)
         << ", Hexadecimal: " << hex << static_cast<int>(input_char) << dec << ")" << endl;

    // d. Armazenar e imprimir caracteres especiais 'ç' e 'ã'
    char cedilha = 'ç';
    char til = 'ã';
    cout << "'" << cedilha << "' - " << static_cast<int>(cedilha)
         << " (Octal: " << oct << static_cast<int>(cedilha)
         << ", Hexadecimal: " << hex << static_cast<int>(cedilha) << dec << ")" << endl;
    cout << "'" << til << "' - " << static_cast<int>(til)
         << " (Octal: " << oct << static_cast<int>(til)
         << ", Hexadecimal: " << hex << static_cast<int>(til) << dec << ")" << endl;

    return 0;
}
