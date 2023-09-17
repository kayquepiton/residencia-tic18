#include <iostream>

using namespace std;

int main() {
    // a. Declaração das variáveis double
    double x, y, z;

    // b. Solicitar ao usuário que digite dois números de ponto flutuante e atribuir a x e y
    cout << "Digite o primeiro número de ponto flutuante (x): ";
    cin >> x;
    cout << "Digite o segundo número de ponto flutuante (y): ";
    cin >> y;

    // c. Atribuir a z a soma de x e y e imprimir o resultado
    z = x + y;
    cout << "Soma de x e y: " << z << endl;

    // d. Atribuir a z a média de x e y e imprimir o resultado
    z = (x + y) / 2.0; // Usar 2.0 para realizar uma divisão de ponto flutuante
    cout << "Média de x e y: " << z << endl;

    // e. Atribuir a z o produto de x e y e imprimir o resultado
    z = x * y;
    cout << "Produto de x e y: " << z << endl;

    // f. Atribuir a z o maior valor entre x e y e imprimir o resultado
    z = (x > y) ? x : y;
    cout << "Maior valor entre x e y: " << z << endl;

    // g. Atribuir a z o menor valor entre x e y e imprimir o resultado
    z = (x < y) ? x : y;
    cout << "Menor valor entre x e y: " << z << endl;

    return 0;
}
