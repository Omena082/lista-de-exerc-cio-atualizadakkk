#include <iostream>
using namespace std;


int coeficienteBinomial(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {

        return coeficienteBinomial(n - 1, k - 1) + coeficienteBinomial(n - 1, k);
    }
}

int main() {
    int n;


    cout << "Digite o número de linhas do Triângulo de Pascal a serem impressas: ";
    cin >> n;


    for (int linha = 0; linha < n; linha++) {
        for (int coluna = 0; coluna <= linha; coluna++) {

            cout << coeficienteBinomial(linha, coluna) << " ";
        }
        cout << endl;
    }

    return 0;
}
