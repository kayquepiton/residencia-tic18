#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class ItemSet {
private:
    vector<string> items;

public:
    // Método para inserir um item no conjunto, caso não exista
    void inserir(string s) {
        // Verifica se o item já existe no conjunto
        if (find(items.begin(), items.end(), s) == items.end()) {
            items.push_back(s);
            cout << "Item \"" << s << "\" inserido no conjunto." << endl;
        } else {
            cout << "Item \"" << s << "\" já existe no conjunto." << endl;
        }
    }

    // Método para excluir um item do conjunto, caso exista
    void excluir(string s) {
        // Procura o item no conjunto
        auto it = find(items.begin(), items.end(), s);
        if (it != items.end()) {
            items.erase(it);
            cout << "Item \"" << s << "\" excluído do conjunto." << endl;
        } else {
            cout << "Item \"" << s << "\" não encontrado no conjunto." << endl;
        }
    }

    // Método para exibir o conjunto de itens
    void exibir() {
        cout << "Itens no conjunto:" << endl;
        for (const string& item : items) {
            cout << "- " << item << endl;
        }
    }
};

int main() {
    ItemSet conjunto;

    conjunto.inserir("Maçã");
    conjunto.inserir("Banana");
    conjunto.inserir("Maçã");
    conjunto.inserir("Pêra");

    conjunto.exibir();

    conjunto.excluir("Banana");
    conjunto.excluir("Uva");

    conjunto.exibir();

    return 0;
}
