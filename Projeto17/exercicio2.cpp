#include <iostream>
#include <cmath>

using namespace std;

class Ponto {
private:
    double x;
    double y;

public:
    // Construtor padrão
    Ponto() : x(0), y(0) {}

    // Construtor com coordenadas iniciais
    Ponto(double x, double y) : x(x), y(y) {}

    // Métodos para definir as coordenadas
    void setCoordenadas(double novoX, double novoY) {
        x = novoX;
        y = novoY;
    }

    // Métodos para obter as coordenadas
    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    // Método para calcular a distância até a origem (0,0)
    double calcularDistancia() const {
        return sqrt(x * x + y * y);
    }
};

int main() {
    // Teste com pontos individuais
    Ponto p1(3, 4);
    double distancia1 = p1.calcularDistancia();
    cout << "Distância do ponto (3, 4) até a origem: " << distancia1 << endl;

    Ponto p2(-2, 7);
    p2.setCoordenadas(1, 1);
    double distancia2 = p2.calcularDistancia();
    cout << "Distância do ponto (1, 1) até a origem: " << distancia2 << endl;

    Ponto p3(0, 3);
    Ponto p4(4, 0);
    double distancia3 = p3.calcularDistancia();
    double distancia4 = p4.calcularDistancia();
    cout << "Distância do ponto (0, 3) até a origem: " << distancia3 << endl;
    cout << "Distância do ponto (4, 0) até a origem: " << distancia4 << endl;

    // Teste com um array de pontos
    Ponto pontos[3];
    pontos[0].setCoordenadas(2, 2);
    pontos[1].setCoordenadas(-1, 5);
    pontos[2].setCoordenadas(0, 0);
    for (int i = 0; i < 3; ++i) {
        double distancia = pontos[i].calcularDistancia();
        cout << "Distância do ponto " << i + 1 << " até a origem: " << distancia << endl;
    }

    // Teste com ponto padrão
    Ponto p5;
    cout << "Coordenadas do ponto p5: (" << p5.getX() << ", " << p5.getY() << ")" << endl;
    p5.setCoordenadas(8, -3);
    cout << "Novas coordenadas do ponto p5: (" << p5.getX() << ", " << p5.getY() << ")" << endl;

    return 0;
}
