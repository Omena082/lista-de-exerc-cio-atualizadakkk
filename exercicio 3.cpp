
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Digite a ordem da matriz: ";
  cin >> n;

  int matriz[n][n];

  // Preenchendo a matriz
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      matriz[i][j] = (i + 1) * (j + 1);
    }
  }

  // Imprimindo a matriz
  cout << "Matriz:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
