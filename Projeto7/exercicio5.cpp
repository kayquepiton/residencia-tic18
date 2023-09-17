#include <iostream>
#include <random>

using namespace std;

int gera_aleatorio(){

    int numero_aleatorio = 0;

    // Crie um gerador de números aleatórios
    random_device rd;
    mt19937 mt(rd());

    // Defina o intervalo desejado (por exemplo, de 1 a 100)
    int min = 1;
    int max = 100;

    // Crie uma distribuição uniforme dentro do intervalo
    uniform_int_distribution<int> dist(min, max);

    // Gere um número aleatório
    numero_aleatorio = dist(mt);

    return numero_aleatorio;
    
}

int main() {

    int numero_aleatorio = gera_aleatorio();

    int palpite;
    cin >> palpite;

    // Enquanto o palpite for diferente do número aleatório
    while (palpite != numero_aleatorio){
        if (palpite > numero_aleatorio){
            cout << "Alto\n";
        }else{
            cout << "Baixo\n";
        }
        cin >> palpite;
    }

    cout << "Acertou!\n";
    

    return 0;
}
