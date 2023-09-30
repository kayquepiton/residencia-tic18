#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    float nota1;
    float nota2;
    float media;
    string resultado;
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

// Função para excluir um aluno da lista pelo nome
void excluirAluno(vector<Aluno>& alunos, const string& nome) {
    for (auto it = alunos.begin(); it != alunos.end(); ++it) {
        if (it->nome == nome) {
            alunos.erase(it);
            cout << "Aluno removido com sucesso." << endl;
            return;
        }
    }
    cout << "Aluno não encontrado na lista." << endl;
}

// Função para alterar as notas de um aluno pelo nome
void alterarNotaAluno(vector<Aluno>& alunos, const string& nome, const int& escolha) {
    for (auto& aluno : alunos) {
        if (aluno.nome == nome) {
            if (escolha == 1){
                cout << "\nDigite a nova Nota 1 para o aluno " << nome << ": ";
                cin >> aluno.nota1;
            }else{
                cout << "\nDigite a nova Nota 2 para o aluno " << nome << ": ";
            cin >> aluno.nota2;
            }

            aluno.media = (aluno.nota1 + aluno.nota2) / 2;

            if(aluno.media >= 7){
                aluno.resultado = "Aprovado";
            }else{
                aluno.resultado = "Reprovado";
            }
            
            cout << "\nNotas do aluno " << nome << " alteradas com sucesso." << endl;

            return;
        }
    }
    cout << "Aluno não encontrado na lista." << endl;
}

int main() {
    int N;
    cout << "Digite o limite de alunos: ";
    cin >> N;

    vector<Aluno> alunos;

    while (N > 0) {
        cout << "\nInformações do aluno " << alunos.size() + 1 << ":" << endl;
        Aluno aluno;

        cout << "Nome do aluno: ";
        cin.ignore();
        getline(cin, aluno.nome);

        cout << "Nota 1: ";
        cin >> aluno.nota1;

        cout << "Nota 2: ";
        cin >> aluno.nota2;

        aluno.media = (aluno.nota1 + aluno.nota2) / 2;
        
        if(aluno.media >= 7){
            aluno.resultado = "Aprovado";
        }else{
            aluno.resultado = "Reprovado";
        }

        alunos.push_back(aluno);

        cout << "\nDeseja incluir mais alunos (s/n)? ";
        string resposta;
        cin >> resposta;

        if (resposta != "s" && resposta != "S") {
            break;
        }

        N--; // Reduza o limite de alunos restantes
    }

    bubbleSort(alunos);

    cout << "\nInformações dos alunos (ordenados por nome):" << endl;
    for (int i = 0; i < alunos.size(); i++) {
        cout << "Aluno " << i + 1 << ": " << alunos[i].nome << ", Nota 1: " << alunos[i].nota1 << ", Nota 2: " << alunos[i].nota2 << ", resultado: " << alunos[i].resultado << endl;
    }

    // Exclusão de alunos
    string resposta;
    cout << "\nDeseja excluir algum aluno (s/n)? ";
    cin >> resposta;

    while (resposta == "s" || resposta == "S") {
        string nomeParaExcluir;
        cout << "\nDigite o nome do aluno que deseja excluir: ";
        cin.ignore();
        getline(cin, nomeParaExcluir);

        excluirAluno(alunos, nomeParaExcluir);

        cout << "\nDeseja excluir outro aluno (s/n)? ";
        cin >> resposta;
    }

    cout << "\nInformações dos alunos (ordenados por nome):" << endl;
    for (int i = 0; i < alunos.size(); i++) {
        cout << "Aluno " << i + 1 << ": " << alunos[i].nome << ", Nota 1: " << alunos[i].nota1 << ", Nota 2: " << alunos[i].nota2 << ", resultado: " << alunos[i].resultado << endl;
    }

    // Alterar nota de aluno
    cout << "\nDeseja alterar notar de algum aluno (s/n)? ";
    cin >> resposta;

    while (resposta == "s" || resposta == "S") {
        string nomeParaAlterarNota;
        cout << "\nDigite o nome do aluno que deseja alterar a nota: ";
        cin.ignore();
        getline(cin, nomeParaAlterarNota);

    double primeiraNota = 0.0;
    double segundaNota = 0.0;
    int escolha;

    do {
        // Exibir o menu
        cout << "\nMenu:" << endl;
        cout << "1 - Alterar a primeira nota" << endl;
        cout << "2 - Alterar a segunda nota" << endl;
        cout << "0 - Nenhuma nota" << endl;

        // Obter a escolha do usuário
        cout << "Escolha uma opção: ";
        cin >> escolha;

        // Realizar a ação com base na escolha do usuário
        switch (escolha) {
            case 1:
                alterarNotaAluno(alunos, nomeParaAlterarNota, escolha);

                cout << "\nInformações dos alunos (ordenados por nome):" << endl;
                for (int i = 0; i < alunos.size(); i++) {
                    cout << "Aluno " << i + 1 << ": " << alunos[i].nome << ", Nota 1: " << alunos[i].nota1 << ", Nota 2: " << alunos[i].nota2 << ", resultado: " << alunos[i].resultado << endl;
                }

                cout << "\nDeseja alterar nota de outro aluno (s/n)? ";
                cin >> resposta;
                break;
            case 2:
                alterarNotaAluno(alunos, nomeParaAlterarNota, escolha);

                cout << "\nInformações dos alunos (ordenados por nome):" << endl;
                for (int i = 0; i < alunos.size(); i++) {
                    cout << "Aluno " << i + 1 << ": " << alunos[i].nome << ", Nota 1: " << alunos[i].nota1 << ", Nota 2: " << alunos[i].nota2 << ", resultado: " << alunos[i].resultado << endl;
                }

                cout << "\nDeseja alterar nota de outro aluno (s/n)? ";
                cin >> resposta;
                break;
            case 0:
                cout << "Saindo do programa." << endl;
                resposta = "n";
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }

        if(resposta == "n" || resposta == "N"){
            cout << "\nInformações dos alunos (ordenados por nome):" << endl;
            for (int i = 0; i < alunos.size(); i++) {
                cout << "Aluno " << i + 1 << ": " << alunos[i].nome << ", Nota 1: " << alunos[i].nota1 << ", Nota 2: " << alunos[i].nota2 << ", resultado: " << alunos[i].resultado << endl;
            }

            break;
        }

    } while (escolha != 0);


    }

    return 0;
}
