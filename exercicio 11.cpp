#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    int somaDiagonalSecundaria = 0;

    // Leitura da matriz
    cout << "Digite os elementos da matriz 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }

    // Cálculo da soma dos elementos da diagonal secundária
    for (int i = 0; i < 3; i++) {
        somaDiagonalSecundaria += matriz[i][2 - i];
    }

    // Impressão da soma
    cout << "Soma dos elementos da diagonal secundária: " << somaDiagonalSecundaria << endl;

    return 0;
}
