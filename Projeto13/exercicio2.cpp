#include <iostream>
#include <string>

using namespace std;

// Estrutura para armazenar informações de empregados
struct Empregado {
    string nome;
    string sobrenome;
    int anoNascimento;
    string RG;
    int anoAdmissao;
    double salario;
};

// Função para reajustar o salário de cada empregado em 10%
void Reajusta_dez_porcento(Empregado empregados[], int quantidade) {
    for (int i = 0; i < quantidade; ++i) {
        empregados[i].salario *= 1.10; // Aumento de 10%
    }
}

int main() {
    const int capacidade = 50;
    Empregado empregados[capacidade];
    int quantidade;

    // Solicita ao usuário a quantidade de empregados
    cout << "Digite a quantidade de empregados (até " << capacidade << "): ";
    cin >> quantidade;

    if (quantidade <= capacidade && quantidade >= 0) {
        // Preenche os dados dos empregados (para fins de exemplo, usaremos valores fictícios)
        for (int i = 0; i < quantidade; ++i) {
            empregados[i].nome = "Nome" + to_string(i + 1);
            empregados[i].sobrenome = "Sobrenome" + to_string(i + 1);
            empregados[i].anoNascimento = 1990 + i;
            empregados[i].RG = "RG" + to_string(i + 1);
            empregados[i].anoAdmissao = 2015 + i;
            empregados[i].salario = 3000.0 + i * 500;
        }

        // Exibe os salários antes do reajuste
        cout << "Salários antes do reajuste:" << endl;
        for (int i = 0; i < quantidade; ++i) {
            cout << "Empregado " << i + 1 << ": " << empregados[i].salario << endl;
        }

        // Aplica o reajuste de 10% nos salários
        Reajusta_dez_porcento(empregados, quantidade);

        // Exibe os salários após o reajuste
        cout << "Salários após o reajuste:" << endl;
        for (int i = 0; i < quantidade; ++i) {
            cout << "Empregado " << i + 1 << ": " << empregados[i].salario << endl;
        }
    } else {
        cout << "Quantidade de empregados inválida." << endl;
    }

    return 0;
}
