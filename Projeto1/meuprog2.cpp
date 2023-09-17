#include <iostream>
#include <iomanip> // Para std::fixed e std::setprecision
#include <string>

using namespace std;

int main() {
    // Declaração e inicialização das variáveis de entrada
    float numero1 = 5.0;
    float numero2 = 3.0;

    // Verificar se o segundo número é zero para evitar divisão por zero
    if (numero2 == 0) {
        cerr << "Erro: Divisão por zero não é permitida." << endl;
        return 1; // Sair do programa com código de erro
    }

    // Realizar cálculos
    float soma = numero1 + numero2;
    float subtracao = numero1 - numero2;
    float multiplicacao = numero1 * numero2;
    float divisao = numero1 / numero2; // Não é necessário converter aqui
    float resto = numero1 - (numero2 * static_cast<int>(divisao)); // Cálculo do resto como float
    
    // Configurar a saída para mostrar duas casas decimais
    cout << fixed << setprecision(1);

    // Exibir resultados
    cout << "Soma = " << soma << endl;
    cout << "Subtração = " << subtracao << endl;
    cout << "Multiplicação = " << multiplicacao << endl;
    cout << "Divisão = " << divisao << endl;
    cout << "Resto = " << resto << endl;

    return 0;
}
