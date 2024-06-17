#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double matriz[3][6];
    double soma_colunas_impares = 0;
    double soma_coluna_2 = 0;
    double soma_coluna_4 = 0;

    // Leitura da matriz
    cout << "Digite os elementos da matriz 3 x 6:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> matriz[i][j];
        }
    }

    // (a) Soma dos elementos das colunas ímpares
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j += 2) {
            soma_colunas_impares += matriz[i][j];
        }
    }
    cout << "Soma dos elementos das colunas ímpares: " << soma_colunas_impares << endl;

    // (b) Média aritmética dos elementos da segunda e quarta colunas
    for (int i = 0; i < 3; i++) {
        soma_coluna_2 += matriz[i][1];
        soma_coluna_4 += matriz[i][3];
    }
    cout << "Média aritmética dos elementos da segunda e quarta colunas: " << (soma_coluna_2 + soma_coluna_4) / 6 << endl;

    // (c) Substituição dos valores da sexta coluna
    for (int i = 0; i < 3; i++) {
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }

    // (d) Impressão da matriz modificada
    cout << "Matriz modificada:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cout << fixed << setprecision(2) << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
