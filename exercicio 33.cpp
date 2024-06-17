#include <iostream>

using namespace std;

void compactaVetor(int vetor[], int &tamanho) {
    int j = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] != 0) {
            vetor[j] = vetor[i];
            j++;
        }
    }
    tamanho = j;
}

int main() {
    int vetor[15];
    int tamanho = 15;


    cout << "Digite 15 elementos para o vetor (podem incluir zeros):" << endl;
    for (int i = 0; i < 15; i++) {
        cin >> vetor[i];
    }

    compactaVetor(vetor, tamanho);

    cout << "Vetor compactado:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
