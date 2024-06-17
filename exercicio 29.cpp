#include <iostream>
using namespace std;

int main() {
    int num, evenSum = 0, oddCount = 0;
    cout << "Digite 6 numeros inteiros:\n";

    for (int i = 0; i < 6; ++i) {
        cin >> num;

        if (num % 2 == 0) {
            cout << num << " eh par.\n";
            evenSum += num;
        } else {
            cout << num << " eh impar.\n";
            oddCount++;
        }
    }

    cout << "Soma dos numeros pares: " << evenSum << endl;
    cout << "Total de numeros impares: " << oddCount << endl;

    return 0;
}
