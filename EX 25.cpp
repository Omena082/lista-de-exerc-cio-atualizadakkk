#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros;
    int count = 0;
    int num = 1;

    while (count < 100) {

        if (num % 7 != 0 && num % 10 != 7) {
            numeros.push_back(num);
            count++;
        }
        num++;
    }


    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
