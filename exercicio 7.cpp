#include <iostream>
using namespace std;

int main() {
    int A[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i < j) {
                A[i][j] = 2 * i + 7 * j;
            } else if (i == j) {
                A[i][j] = 3 * i * i;
            } else {
                A[i][j] = 4 * i * i * i + 5 * j * j;
            }
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
