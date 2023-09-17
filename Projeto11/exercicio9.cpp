#include <iostream>

using namespace std;

// Função para calcular o valor de S, conforme a fórmula fornecida.
// Recebe um número inteiro N como entrada.
// Retorna o valor calculado de S.
double calcularS(int N) {
    double S = 0.0;
    for (int i = 1; i <= N; i++) {
        // A cada iteração, a fração i / (N - i + 1) é adicionada a S.
        S += static_cast<double>(i) / (N - i + 1);
    }
    return S;
}

int main() {
    int N;
    
    cout << "Digite o valor de N: ";
    cin >> N;

    if (N <= 0) {
        cout << "N deve ser um número positivo." << endl;
    } else {
        // Chama a função calcularS para obter o resultado e o exibe.
        double resultadoS = calcularS(N);
        cout << "O valor de S é: " << resultadoS << endl;
    }

    return 0;
}
