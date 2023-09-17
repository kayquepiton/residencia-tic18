#include <iostream>
#include <vector>

using namespace std;

// Definição da estrutura para armazenar informações de nome, matrícula e notas
struct Aluno {
    int matricula;
    double nota[3];
};

int main() {
    // Criação de uma lista de alunos para armazenar informações
    vector<Aluno> listaAlunos;
    int matricula;
    double nota1, nota2, nota3;
    char continuar = 'S';

    while (continuar != 'N'){
        cout << "Matricula: ";
        cin >> matricula;
        cout << "Nota1: ";
        cin >> nota1;
        cout << "Nota2: ";
        cin >> nota2;
        cout << "Nota3: ";
        cin >> nota3;

        listaAlunos.push_back({matricula, nota1, nota2, nota3});
        cout << "\nDeseja continuar? (S/N): ";
        cin >> continuar;
    }

    // Iterando pelo vetor de alunos e exibindo as informações
    for (const Aluno& aluno : listaAlunos) {
        double media = (aluno.nota[0] + aluno.nota[1] + aluno.nota[2]) / 3;

        cout << "\nMATRICULA NOTA1 NOTA2 NOTA3 MEDIA: " << endl;
        cout << "===========================================" << endl;
        cout << aluno.matricula << "   ";
        cout << aluno.nota[0] << "     ";
        cout << aluno.nota[1] << "     ";
        cout << aluno.nota[2] << "     ";
        cout << media << "   " << endl;


    }

    return 0;
}
