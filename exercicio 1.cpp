#include <iostream>
using namespace std;

int main() {
    int matriz[4][4];
    int cont = 0;

    cout << "Digite os elementos da matriz 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > 10) {
                cont++;
            }
        }
    }

    cout << "A matriz possui " << cont << " valores maiores que 10.\n";

    return 0;
}
