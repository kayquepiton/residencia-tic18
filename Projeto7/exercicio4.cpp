#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Função para verificar se um número é primo
bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;  // 0 e 1 não são considerados primos
    }

    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;  // Se for divisível por algum número, não é primo
        }
    }

    return true;  // Se não for divisível por nenhum número, é primo
}

int main() {

    // Loop de 1 a 100 para verificar números primos
    for(int numero = 1; numero <= 100; numero++){
        if(ehPrimo(numero)){
            cout << numero << " é primo" << endl;
        }else{
            cout << numero << " não é primo" << endl;
        }
    }
    
    return 0;
}
