#include <iostream>
#include <string>

using namespace std;

// Kayque: Processador (CPU)
struct CPU {
    string marca;
    int nucleos;
    double frequencia; // em GHz
};

// João: Memória RAM
struct RAM {
    string tipo;
    int capacidade; // em GB
};

// Felipe: Disco Rígido (HD/SSD)
struct Armazenamento {
    string tipo;
    int capacidade; // em GB
};

// Valber: Placa de Vídeo (GPU)
struct GPU {
    string marca;
    int memoria; // em GB
};

// Gabriel: Sistema Operacional (OS)
struct SistemaOperacional {
    string nome;
    string versao;
};

// Struct maior: Computador
struct Computador {
    CPU processador;
    RAM memoria;
    Armazenamento disco;
    GPU placaDeVideo;
    SistemaOperacional sistema;
};

int main() {
    // Criando um computador como exemplo
    Computador meuPc = {
        { "Intel", 8, 3.5 },                 // CPU
        { "DDR4", 16 },                      // RAM
        { "SSD", 500 },                      // Armazenamento
        { "NVIDIA", 6 },                     // GPU
        { "Windows", "11 Pro" }              // Sistema Operacional
    };

    // Exibindo informações
    cout << "Informacoes do Computador:\n";
    cout << "Processador: " << meuPc.processador.marca << ", Nucleos: " << meuPc.processador.nucleos << ", Frequencia: " << meuPc.processador.frequencia << " GHz" << endl;
    cout << "Memoria RAM: " << meuPc.memoria.tipo << ", Capacidade: " << meuPc.memoria.capacidade << " GB" << endl;
    cout << "Armazenamento: " << meuPc.disco.tipo << ", Capacidade: " << meuPc.disco.capacidade << " GB" << endl;
    cout << "Placa de Video: " << meuPc.placaDeVideo.marca << ", Memoria: " << meuPc.placaDeVideo.memoria << " GB" << endl;
    cout << "Sistema Operacional: " << meuPc.sistema.nome << ", Versao: " << meuPc.sistema.versao << endl;

    return 0;
}
