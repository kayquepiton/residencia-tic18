#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    float nota1;
    float nota2;
};

// Função para realizar a ordenação dos alunos pelo nome usando o Bubble Sort
void bubbleSort(vector<Aluno>& alunos) {
    int n = alunos.size();
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < n - 1; i++) {
            if (alunos[i].nome > alunos[i + 1].nome) {
                swap(alunos[i], alunos[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);
}

int main() {
    int N;
    cout << "Digite o limite de alunos: ";
    cin >> N;

    if (N <= 0) {
        cout << "O limite de alunos deve ser um número positivo." << endl;
        return 1;
    }

    vector<Aluno> alunos;

    for (int i = 0; i < N; i++) {
        cout << "Informações do aluno " << i + 1 << ":" << endl;
        Aluno aluno;

        cout << "Nome do aluno: ";
        cin.ignore();
        getline(cin, aluno.nome);

        cout << "Nota 1: ";
        cin >> aluno.nota1;

        cout << "Nota 2: ";
        cin >> aluno.nota2;

        alunos.push_back(aluno);
        
    }

    


    bubbleSort(alunos);

    cout << "\nInformações dos alunos (ordenados por nome):" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Aluno " << i + 1 << ": " << alunos[i].nome << ", Nota 1: " << alunos[i].nota1 << ", Nota 2: " << alunos[i].nota2 << endl;
    }

    return 0;
}
