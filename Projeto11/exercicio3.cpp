#include <iostream>

using namespace std;

// Função para ordenar quatro números em ordem crescente.
void ordenar(float &a, float &b, float &c, float &d) {
    // Compara e troca os valores para ordenar em ordem crescente.
    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        float temp = a;
        a = c;
        c = temp;
    }
    if (a > d) {
        float temp = a;
        a = d;
        d = temp;
    }
    if (b > c) {
        float temp = b;
        b = c;
        c = temp;
    }
    if (b > d) {
        float temp = b;
        b = d;
        d = temp;
    }
    if (c > d) {
        float temp = c;
        c = d;
        d = temp;
    }
}

int main() {
    float num1, num2, num3, num4;

    cout << "Digite quatro números float: ";
    cin >> num1 >> num2 >> num3 >> num4;

    ordenar(num1, num2, num3, num4);  // Chama a função para ordenar os números.

    cout << "Números em ordem crescente: " << num1 << " " << num2 << " " << num3 << " " << num4 << endl;

    return 0;
}
