#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vetor1[10];
    vector<int> vetor2;

   cout << "Digite 10 números inteiros no intervalo [0, 50]:\n";
    for (int i = 0; i < 10; ++i) {

        int num;
        cin >> num;

        while (num < 0 || num > 50) {
        cout << "Número fora do intervalo. Digite novamente:\n";
        cin >> num;
        }

        vetor1[i] = num;

        if (num % 2 != 0) {
            vetor2.push_back(num);
        }
    }

    cout << "\nVetor1:\n";

    for (int i = 0; i < 10; i += 2) {
        cout << vetor1[i];

        if (i + 1 < 10) {
            cout << " " << vetor1[i + 1];
        }

        cout << "\n";
    }

    cout << "\nVetor2 (ímpares):\n";

    for (size_t i = 0; i < vetor2.size(); i += 2) {
        cout << vetor2[i];

        if (i + 1 < vetor2.size()) {
            cout << " " << vetor2[i + 1];
        }
        cout << "\n";
    }

    return 0;
}
