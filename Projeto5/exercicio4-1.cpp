#include <iostream>
#include <cmath> // Incluindo a biblioteca para cálculos matemáticos

using namespace std;

int main() {
    // a. Declaração das variáveis double
    double x, y, z;

    // b. Solicitar ao usuário que digite dois números de ponto flutuante e atribuir a x e y
    cout << "Digite o valor de x (coordenada no eixo x): ";
    cin >> x;
    cout << "Digite o valor de y (coordenada no eixo y): ";
    cin >> y;

    // c. Identificar em que lado da curva f(x) = 5x + 2 o ponto (x, y) se encontra
    double curva = 5 * x + 2;
    if (y > curva) {
        cout << "O ponto (" << x << ", " << y << ") está acima da curva f(x) = 5x + 2." << endl;
    } else if (y < curva) {
        cout << "O ponto (" << x << ", " << y << ") está abaixo da curva f(x) = 5x + 2." << endl;
    } else {
        cout << "O ponto (" << x << ", " << y << ") está sobre a curva f(x) = 5x + 2." << endl;
    }

    // d. Atribuir a z o valor da distância euclidiana do ponto (x, y) ao centro de coordenadas
    z = sqrt(x * x + y * y);
    cout << "A distância euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas é: " << z << endl;

    // e. Atribuir a z o produto entre x e y e imprimir o resultado em notação científica
    z = x * y;
    cout << "O produto entre x e y em notação científica é: " << scientific << z << endl;

    return 0;
}
