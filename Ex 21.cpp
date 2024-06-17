#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int>A(10);
    vector<int>B(10);
    vector<int>C(10);

    cout << "Digite 10 numeros inteiros para o vetor A:" << endl;
    for(int i = 0; i < 10; i++) {
        cin >> A[i];
    }

    cout << "\nDigite 10 numeros inteiros para o vetor B:" << endl;
    for(int i = 0; i < 10; i++) {
        cin >> B[i];
    }

    for(int i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
    }

    cout << "\nVetor C (A - B):" << endl;
    for(int i = 0; i < 10; i++) {
        cout << C[i] << " " << endl;
    }
    cout << endl;

    return 0;
}
