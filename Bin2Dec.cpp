#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string binario;
    int decimal = 0;

    cout << "---- Conversor Bin2Dec ----" << endl;
    cout << "Digite um numero binario (ate 8 digitos): ";
    cin >> binario;

    if (binario.length () > 8) {
        cout << "Erro: no maximo 8 digitos." << endl;
        return 1;
    }

    int tamanho = binario.length();

    for (int i = 0; i < tamanho; i++) {
        if (binario[i] != '0' && binario[i] != '1'){
            cout << "Erro: Apenas 0 e 1 sao aceitos." << endl;
            return 1;
        }
        
        if (binario[i] =='1'){
            decimal += pow(2, tamanho - 1 - i);

        }
    }

    cout <<"Resultado em Decimal: " << decimal <<endl;

    return 0;
}