#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<double> numeros;


    cout << "Digite 10 números reais:" << endl;
    for (int i = 0; i < 10; ++i) {
        double valor;
        cin >> valor;


        auto pos = lower_bound(numeros.begin(), numeros.end(), valor);
        numeros.insert(pos, valor);
    }


    cout << "Números ordenados:" << endl;
    for (const double &num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
