#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

// Struct para representar um Passageiro
struct Passageiro {
    string nome;
    string cpf;
    int idade;
};

// Struct para representar uma Passagem
struct Passagem {
    int numeroAssento;
    string dataHora;
    Passageiro passageiro;
    double valor;
};

// Struct para representar uma Viagem
struct Viagem {
    string origem;
    string destino;
    string horario;
    vector<Passagem> passagens;
};

// Função para calcular a média de idade dos passageiros
double calcularMediaIdade(const Viagem& viagem) {
    int totalIdade = 0;
    for (const Passagem& passagem : viagem.passagens) {
        totalIdade += passagem.passageiro.idade;
    }
    return static_cast<double>(totalIdade) / viagem.passagens.size();
}

int main() {
    // Criar 5 viagens de ida e 5 viagens de volta entre Rio de Janeiro e São Paulo
    vector<Viagem> viagens;
    for (int i = 0; i < 5; i++) {
        Viagem ida;
        ida.origem = "Rio de Janeiro";
        ida.destino = "São Paulo";
        ida.horario = "08:00"; // Horário de partida da ida
        viagens.push_back(ida);

        Viagem volta;
        volta.origem = "São Paulo";
        volta.destino = "Rio de Janeiro";
        volta.horario = "18:00"; // Horário de partida da volta
        viagens.push_back(volta);
    }

    // Simular a venda de passagens
    srand(static_cast<unsigned>(time(nullptr))); // Semente para geração de números aleatórios

    for (Viagem& viagem : viagens) {
        for (int assento = 1; assento <= 40; assento++) {
            Passagem passagem;
            passagem.numeroAssento = assento;
            passagem.dataHora = "2023-09-30 " + viagem.horario; // Data fictícia para simulação
            passagem.passageiro.nome = "Passageiro " + to_string(rand() % 1000);
            passagem.passageiro.cpf = "CPF" + to_string(rand() % 1000000000);
            passagem.passageiro.idade = 18 + rand() % 60; // Idade aleatória entre 18 e 77 anos
            passagem.valor = 80.0; // Valor fixo por passagem

            viagem.passagens.push_back(passagem);
        }
    }

    // Exemplo de uso das funcionalidades
    // 1. Qual o total arrecadado para uma determinada viagem.
    double totalArrecadadoViagem = 0.0;
    for (const Passagem& passagem : viagens[0].passagens) {
        totalArrecadadoViagem += passagem.valor;
    }
    cout << "Total arrecadado para a primeira viagem: R$" << totalArrecadadoViagem << endl;

    // 2. Qual o total arrecadado em um determinado mês (simulação em setembro).
    double totalArrecadadoMes = 0.0;
    for (const Viagem& viagem : viagens) {
        for (const Passagem& passagem : viagem.passagens) {
            if (passagem.dataHora.find("2023-09") != string::npos) {
                totalArrecadadoMes += passagem.valor;
            }
        }
    }
    cout << "Total arrecadado em setembro: R$" << totalArrecadadoMes << endl;

    // 3. Qual o nome do passageiro de uma determinada poltrona P de uma determinada viagem.
    int poltronaDesejada = 5;
    string nomePassageiroPoltronaP = "Não encontrado";
    for (const Passagem& passagem : viagens[2].passagens) {
        if (passagem.numeroAssento == poltronaDesejada) {
            nomePassageiroPoltronaP = passagem.passageiro.nome;
            break;
        }
    }
    cout << "Nome do passageiro da poltrona " << poltronaDesejada << " na terceira viagem: " << nomePassageiroPoltronaP << endl;

    // 4. Qual o horário de viagem mais rentável.
    double maiorArrecadacao = 0.0;
    string horarioMaisRentavel;
   
    for (const Viagem& viagem : viagens) {
        double arrecadacaoViagem = 0.0;
        for (const Passagem& passagem : viagem.passagens) {
            arrecadacaoViagem += passagem.valor;
        }
        if (arrecadacaoViagem > maiorArrecadacao) {
            maiorArrecadacao = arrecadacaoViagem;
            horarioMaisRentavel = viagem.horario;
        }
    }
    cout << "Horário de viagem mais rentável: " << horarioMaisRentavel << endl;

    // 5. Qual a média de idade dos passageiros.
    double mediaIdadePassageiros = calcularMediaIdade(viagens[0]); // Usando a primeira viagem como exemplo
    cout << "Média de idade dos passageiros na primeira viagem: " << mediaIdadePassageiros << " anos" << endl;

    return 0;
}
