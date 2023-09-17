#include <iostream>
#include <limits>

using namespace std;

int main() {
    // a. Encontrando os valores mínimo e máximo para int
    int menor_int = numeric_limits<int>::min();
    int maior_int = numeric_limits<int>::max();

    cout << "Menor valor de int: " << menor_int << endl;
    cout << "Maior valor de int: " << maior_int << endl;

    // b. Criando uma variável uli de tipo unsigned long int com o maior valor possível
    unsigned long int uli = numeric_limits<unsigned long int>::max();

    cout << "Valor de uli: " << uli << endl;

    // c. Atribuindo o valor de uli a li e, em seguida, atribuindo li a uli
    long int li = uli;
    uli = li;

    cout << "Valor de li após atribuir uli: " << li << endl;
    cout << "Valor de uli após atribuir li: " << uli << endl;
    cout << "Resultado: Os valores são preservados, pois a conversão é segura." << endl;

    // d. Atribuindo a li o maior valor que pode ser armazenado em long int
    long int maior_li = numeric_limits<long int>::max();
    li = maior_li;

    cout << "Valor de li após atribuir o maior valor de long int: " << li << endl;

    // e. Atribuindo o valor de li a ui e, em seguida, atribuindo ui a li
    unsigned int ui = li;
    li = ui;

    cout << "Valor de ui após atribuir li: " << ui << endl;
    cout << "Valor de li após atribuir ui: " << li << endl;
    cout << "Resultado: A conversão de long int para unsigned int resulta em truncamento, pois valores negativos não podem ser representados em unsigned int." << endl;

    // f. Atribuindo a ui o maior valor que pode ser armazenado em unsigned int
    unsigned int maior_ui = numeric_limits<unsigned int>::max();
    ui = maior_ui;

    cout << "Valor de ui após atribuir o maior valor de unsigned int: " << ui << endl;

    return 0;
}
