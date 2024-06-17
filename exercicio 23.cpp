
#include <iostream>
using namespace std;

int main() {
  int A[3][3], B[3][3];
  cout << "Digite os elementos da matriz A:" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      B[i][j] = 0;
      for (int k = 0; k < 3; k++) {
        B[i][j] += A[i][k] * A[k][j];
      }
    }
  }
  cout << "A matriz B (A2) e:" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << B[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
