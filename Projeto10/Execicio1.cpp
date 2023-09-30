#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

struct Aluno {
    string nome;
    float nota1;
    float nota2;
};

int main() {
    int N;

    // Solicita o limite de alunos e valida a entrada
    while (true) {
        cout << "Digite o limite de alunos: ";
        if (cin >> N && N > 0) {
            break;
        } else {
            cout << "Número inválido, por favor digite um número positivo válido!\n" << endl;
            
            // Limpa o estado de erro do cin e descarta caracteres extras
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    vector<Aluno> alunos;

    for (int i = 0; i < N; i++) {
        cout << "\nInformações do aluno " << i + 1 << ":" << endl;
        Aluno aluno;

        // Solicita e valida o nome do aluno
        cout << "Nome do aluno: ";
        cin.ignore();
        getline(cin, aluno.nome);

        // Solicita e valida a primeira nota
        while (true) {
            cout << "Nota 1: ";
            if (cin >> aluno.nota1) {
                break;
            } else {
                cout << "\nNota 1 inválida, por favor digite um valor numérico válido." << endl;
                
                // Limpa o estado de erro do cin e descarta caracteres extras
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }

        // Solicita e valida a segunda nota
        while (true) {
            cout << "Nota 2: ";
            if (cin >> aluno.nota2) {
                break;
            } else {
                cout << "\nNota 2 inválida, por favor digite um valor numérico válido." << endl;
                
                // Limpa o estado de erro do cin e descarta caracteres extras
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }

        alunos.push_back(aluno);
    }

    cout << "\nInformações dos alunos: " << endl;
    for (int i = 0; i < N; i++) {
        cout << "Aluno " << i + 1 << ": " << alunos[i].nome << ", Nota 1: " << alunos[i].nota1 << ", Nota 2: " << alunos[i].nota2 << endl;
    }

    return 0;
}
