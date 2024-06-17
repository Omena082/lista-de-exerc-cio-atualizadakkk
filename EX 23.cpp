#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> conjunto1(5);
    vector<double> conjunto2(5);
    double produto_escalar = 0;

    cout << "Digite 5 numeros reais para o primeiro conjunto:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> conjunto1[i];
    }

    cout << "Digite 5 numeros reais para o segundo conjunto:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> conjunto2[i];
    }

    for(int i = 0; i < 5; i++) {
        produto_escalar += conjunto1[i] * conjunto2[i];
    }

    cout << "Conjunto 1: ";
    for(int i = 0; i < 5; i++) {
        cout << conjunto1[i] << " ";
    }
    cout << endl;

    cout << "Conjunto 2: ";
    for(int i = 0; i < 5; i++) {
        cout << conjunto2[i] << " ";
    }
    cout << endl;

    cout << "Produto escalar: " << produto_escalar << endl;

    return 0;
}
