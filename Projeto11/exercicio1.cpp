#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    if (n <= 0) {
        cout << "Erro: O vetor está vazio." << endl;
        return;
    }

    maximo = vetor[0];  // Inicializa maximo com o primeiro elemento
    minimo = vetor[0];  // Inicializa minimo com o primeiro elemento

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maximo) {
            maximo = vetor[i];  // Atualiza o máximo se encontrar um valor maior
        }
        if (vetor[i] < minimo) {
            minimo = vetor[i];  // Atualiza o mínimo se encontrar um valor menor
        }
    }
}

int main() {
    const int tamanho = 5;
    int vetor[tamanho] = {10, 5, 25, 3, 15};
    int maximo, minimo;

    maxmin(vetor, tamanho, maximo, minimo);

    cout << "Elemento de maior valor: " << maximo << endl;
    cout << "Elemento de menor valor: " << minimo << endl;

    return 0;
}
