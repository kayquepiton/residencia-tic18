#include <iostream>
#include <bitset>

using namespace std;

int main() {
    unsigned char informacaoGenetica = 255;
    //cout << "Digite a informação genética da planta (um valor entre 0 e 255): ";
    //cin >> informacaoGenetica;

    bitset<8> bitsGenes(informacaoGenetica);

    // Contar manualmente os genes presentes
    int genesPresentes = 0;
    for (int i = 0; i < 8; ++i) {
        if (bitsGenes[i]) {
            genesPresentes++;
        }
    }

    cout << "Genes presentes nesta planta: " << genesPresentes << endl;

    int numeroGene;
    do {
        cout << "Digite o número do gene que deseja verificar (entre 1 e 8): ";
        cin >> numeroGene;
    } while (numeroGene < 1 || numeroGene > 8);

    bool genePresente = bitsGenes.test(numeroGene - 1);

    if (genePresente) {
        cout << "O gene " << numeroGene << " está presente nesta planta." << endl;
    } else {
        cout << "O gene " << numeroGene << " não está presente nesta planta." << endl;
    }

    return 0;
}
