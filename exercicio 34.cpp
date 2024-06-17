#include <iostream>
using namespace std;

int main() {
    int vetor[10];
    int num;
    bool exists;

    cout << "Digite 10 numeros diferentes:" << endl;

    for (int i = 0; i < 10; ++i) {
        do {
            exists = false;
            cout << "Numero " << (i + 1) << ": ";
            cin >> num;

            for (int j = 0; j < i; ++j) {
                if (vetor[j] == num) {
                    exists = true;
                    cout << "Numero ja digitado, digite outro numero." << endl;
                    break;
                }
            }

        } while (exists);

        vetor[i] = num;
    }

    cout << "Os numeros digitados foram: ";
    for (int i = 0; i < 10; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
