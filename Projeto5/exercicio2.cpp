#include <iostream>
#include <cctype> // Biblioteca para funções de verificação de caracteres

using namespace std;

int main() {
    // a. Declaração das variáveis char
    char ch1, ch2, ch3;

    // b. Solicitar ao usuário que digite um caractere e atribuir a ch1
    cout << "Digite um caractere: ";
    cin >> ch1;

    // c. Verificar se ch1 é uma letra maiúscula, minúscula, dígito ou outro caractere
    if (isupper(ch1)) {
        cout << "O caractere digitado (" << ch1 << ") é uma letra maiúscula." << endl;
    } else if (islower(ch1)) {
        cout << "O caractere digitado (" << ch1 << ") é uma letra minúscula." << endl;
    } else if (isdigit(ch1)) {
        cout << "O caractere digitado (" << ch1 << ") é um dígito." << endl;
    } else {
        cout << "O caractere digitado (" << ch1 << ") é outro tipo de caractere." << endl;
    }

    // e. Atribuir à variável ch2 o caractere 81 (em decimal)
    ch2 = 81;

    // Imprimir ch2 em diferentes formatos
    cout << "ch2 em formato decimal: " << static_cast<int>(ch2) << endl;
    cout << "ch2 em formato octal: " << oct << static_cast<int>(ch2) << dec << endl;
    cout << "ch2 em formato hexadecimal: " << hex << static_cast<int>(ch2) << dec << endl;
    cout << "ch2 como caractere: " << ch2 << endl;

    // f. Atribuir à variável ch3 o caractere correspondente à mesma letra minúscula
    ch3 = tolower(ch2);

    // Imprimir ch3 em diferentes formatos
    cout << "ch3 em formato decimal: " << static_cast<int>(ch3) << endl;
    cout << "ch3 em formato octal: " << oct << static_cast<int>(ch3) << dec << endl;
    cout << "ch3 em formato hexadecimal: " << hex << static_cast<int>(ch3) << dec << endl;
    cout << "ch3 como caractere: " << ch3 << endl;

    return 0;
}
