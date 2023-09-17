#include <iostream>
#include <cmath> // Incluindo a biblioteca para cálculos matemáticos

using namespace std;

int main() {
    // a. Ler os coeficientes a, b e c do usuário
    double a, b, c;
    cout << "Digite o coeficiente a: ";
    cin >> a;
    cout << "Digite o coeficiente b: ";
    cin >> b;
    cout << "Digite o coeficiente c: ";
    cin >> c;

    // i. Verificar o número de raízes reais do polinômio
    double discriminante = b * b - 4 * a * c;
    if (discriminante > 0) {
        cout << "O polinômio tem duas raízes reais." << endl;
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    } else if (discriminante == 0) {
        cout << "O polinômio tem uma raiz real." << endl;
        double raiz = -b / (2 * a);
        cout << "Raiz: " << raiz << endl;
    } else {
        cout << "O polinômio não tem raízes reais." << endl;
    }

    // b. Ler o valor de x e calcular p(x)
    double x;
    cout << "Digite o valor de x: ";
    cin >> x;
    double px = a * x * x + b * x + c;
    cout << "p(x) = " << px << endl;

    return 0;
}
