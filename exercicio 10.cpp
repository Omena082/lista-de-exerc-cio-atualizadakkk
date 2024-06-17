#include <iostream>
using namespace std;

int main() {
  int matriz[3][3];
  int soma = 0;

  // Leitura da matriz
  cout << "Digite os elementos da matriz 3x3:\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> matriz[i][j];
    }
  }

  // Cálculo da soma dos elementos da diagonal principal
  for (int i = 0; i < 3; i++) {
    soma += matriz[i][i];
  }

  // Impressão da soma
  cout << "Soma dos elementos da diagonal principal: " << soma << endl;

  return 0;
}
