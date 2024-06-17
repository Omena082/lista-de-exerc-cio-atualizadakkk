#include <iostream>
using namespace std;

int main() {
  int matriz[3][3];
  int transposta[3][3];

  // Leitura da matriz
  cout << "Digite os elementos da matriz 3x3:\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> matriz[i][j];
    }
  }

  // Cálculo da transposta
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      transposta[j][i] = matriz[i][j];
    }
  }

  // Impressão da transposta
  cout << "Matriz Transposta:\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << transposta[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
