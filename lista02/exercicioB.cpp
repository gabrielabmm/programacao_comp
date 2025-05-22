#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct VetorS {
    int numero1;
    char letra;
    int numero2;
};

int main() {
    vector<VetorS> dados;
    string entradaStr;

    cin >> entradaStr;

    VetorS entrada;
    entrada.numero1 = entradaStr[0] - '0';  
    entrada.letra = entradaStr[1];
    entrada.numero2 = entradaStr[2] - '0';  
    dados.push_back(entrada);

    for (const VetorS& item : dados) {
        int multiplicacao = item.numero1 * item.numero2;
        cout << multiplicacao;
    }

    return 0;
}
