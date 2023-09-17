#include <iostream>

using namespace std;

int* intercala(int *vet1, int tam1, int *vet2, int tam2) {
    int *resultado = new int[tam1 + tam2];
    int i = 0, j = 0, k = 0;

    while (i < tam1 && j < tam2) {
        resultado[k++] = vet1[i++];
        resultado[k++] = vet2[j++];
    }

    // Copie os elementos restantes do vetor 1 (se houver)
    while (i < tam1) {
        resultado[k++] = vet1[i++];
    }

    // Copie os elementos restantes do vetor 2 (se houver)
    while (j < tam2) {
        resultado[k++] = vet2[j++];
    }

    return resultado;
}

int main() {
    int vetor1[] = {1, 3, 5};
    int tam1 = 3;

    int vetor2[] = {2, 4, 6};
    int tam2 = 3;

    int *vetor_intercalado = intercala(vetor1, tam1, vetor2, tam2);

    cout << "Vetor intercalado:" << endl;
    for (int i = 0; i < tam1 + tam2; i++) {
        cout << vetor_intercalado[i] << " ";
    }
    cout << endl;

    // Não se esqueça de liberar a memória alocada para o vetor intercalado
    delete[] vetor_intercalado;

    return 0;
}
