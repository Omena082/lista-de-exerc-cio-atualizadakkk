#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<double> A(11);


    cout << "Digite 11 números reais para formar o vetor A:" << endl;
    for (int i = 0; i < 11; ++i) {
        cin >> A[i];
    }


    reverse(A.begin() + 6, A.end());


    sort(A.begin(), A.end());


    cout << "Números ordenados:" << endl;
    for (int i = 0; i < 11; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
