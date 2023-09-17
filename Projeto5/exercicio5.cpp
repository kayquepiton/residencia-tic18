#include <iostream>
#include <bitset> // Incluindo a biblioteca para manipulação de bits

using namespace std;

int main() {
    // a. Ler a informação genética de uma planta como um caractere sem sinal
    unsigned char informacaoGenetica;
    cout << "Digite a informação genética da planta (um valor entre 0 e 255): ";
    cin >> informacaoGenetica;

    // b. Identificar quantos dos genes estão presentes
    bitset<8> bitsGenes(informacaoGenetica); // Converter o valor em uma representação de bits
    int genesPresentes = bitsGenes.count();

    cout << "Genes presentes nesta planta: " << genesPresentes << endl;

    // c. Solicitar do usuário qual gene ele deseja verificar (um valor entre 1 e 8)
    int numeroGene;
    cout << "Digite o número do gene que deseja verificar (entre 1 e 8): ";
    cin >> numeroGene;

    // Verificar se o gene especificado está presente na planta
    bool genePresente = bitsGenes.test(numeroGene - 1);

    if (genePresente) {
        cout << "O gene " << numeroGene << " está presente nesta planta." << endl;
    } else {
        cout << "O gene " << numeroGene << " não está presente nesta planta." << endl;
    }

    return 0;
}
