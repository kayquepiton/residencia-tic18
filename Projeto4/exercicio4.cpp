#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // a. Encontrando os valores mínimo e máximo para float
    float menor_float = numeric_limits<float>::min();
    float maior_float = numeric_limits<float>::max();

    cout << "Menor valor de float: " << menor_float << endl;
    cout << "Maior valor de float: " << maior_float << endl;

    // b. Criando uma variável pif de tipo float com o valor de pi com alta precisão
    float pif = 3.14159265358979323846;

    cout << "Valor de pif (pi com alta precisão): " << pif << endl;

    // c. Formatando a saída com diferentes quantidades de casas decimais
    cout << fixed << setprecision(2) << "pif (2 casas decimais): " << pif << endl;
    cout << fixed << setprecision(4) << "pif (4 casas decimais): " << pif << endl;
    cout << fixed << setprecision(8) << "pif (8 casas decimais): " << pif << endl;
    cout << fixed << setprecision(16) << "pif (16 casas decimais): " << pif << endl;

    // d. Criando uma variável pid de tipo double com o valor de pi com alta precisão
    double pid = 3.14159265358979323846;

    cout << "Valor de pid (pi com alta precisão, tipo double): " << pid << endl;

    // e. Comparando pif e pid com diferentes quantidades de casas decimais
    cout << fixed << setprecision(2) << "pif (2 casas decimais): " << pif << ", pid: " << pid << endl;
    cout << fixed << setprecision(4) << "pif (4 casas decimais): " << pif << ", pid: " << pid << endl;
    cout << fixed << setprecision(8) << "pif (8 casas decimais): " << pif << ", pid: " << pid << endl;
    cout << fixed << setprecision(16) << "pif (16 casas decimais): " << pif << ", pid: " << pid << endl;

    // f. Verificando a diferença entre double e long double no seu sistema
    long double ld = 3.14159265358979323846L; // Usando a notação L para long double

    cout << "Valor de long double (ld): " << ld << endl;

    return 0;
}
