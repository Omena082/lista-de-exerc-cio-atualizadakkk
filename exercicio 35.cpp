    #include <iostream>
#include <vector>
using namespace std;

vector<int> numeroParaVetor(int num) {
    vector<int> vetor;
    while (num > 0) {
        vetor.push_back(num % 10);
        num /= 10;
    }
    return vetor;
}


vector<int> somaVetores(const vector<int>& a, const vector<int>& b) {
    vector<int> resultado;
    int carry = 0, soma = 0;
    int maxSize = max(a.size(), b.size());

    for (int i = 0; i < maxSize; ++i) {
        int digitoA = (i < a.size()) ? a[i] : 0;
        int digitoB = (i < b.size()) ? b[i] : 0;

        soma = digitoA + digitoB + carry;
        carry = soma / 10;
        resultado.push_back(soma % 10);
    }

    if (carry > 0) {
        resultado.push_back(carry);
    }

    return resultado;
}


void imprimeVetor(const vector<int>& vetor) {
    for (int i = vetor.size() - 1; i >= 0; --i) {
        cout << vetor[i];
    }
    cout << endl;
}

int main() {
    int a, b;
    cout << "Digite dois números positivos menores que 10000: ";
    cin >> a >> b;


    if (a < 0 || a >= 10000 || b < 0 || b >= 10000) {
        cout << "Os números devem ser positivos e menores que 10000." << endl;
        return 1;
    }


    vector<int> vetorA = numeroParaVetor(a);
    vector<int> vetorB = numeroParaVetor(b);


    vector<int> vetorSoma = somaVetores(vetorA, vetorB);

    cout << "Vetor de dígitos de A: ";
    imprimeVetor(vetorA);

    cout << "Vetor de dígitos de B: ";
    imprimeVetor(vetorB);

    cout << "Vetor de dígitos da soma: ";
    imprimeVetor(vetorSoma);

    return 0;
}
