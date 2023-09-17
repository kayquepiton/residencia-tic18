#include <iostream>

using namespace std;

int main() {
    // Variáveis de tipos diferentes
    int inteiro = 42;
    float flutuante = 0.0;
    double duplo = 0.0;
    char caractere = 'A';
    string texto = "Hello";
    
    // Demonstrando conversão para bool
    bool b1 = inteiro;      // int para bool
    bool b2 = flutuante;    // float para bool
    bool b3 = duplo;        // double para bool
    bool b4 = caractere;    // char para bool
    bool b5 = texto.empty(); // string para bool
    
    // Imprimindo os resultados
    cout << "int para bool: " << b1 << endl;
    cout << "float para bool: " << b2 << endl;
    cout << "double para bool: " << b3 << endl;
    cout << "char para bool: " << b4 << endl;
    cout << "string vazia para bool: " << b5 << endl;

    return 0;
}
