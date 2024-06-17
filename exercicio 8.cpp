
#include <iostream>
using namespace std;

int main() {
  int matriz[3][3];
  int soma = 0;

  cout << "Digite os elementos da matriz 3x3:\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> matriz[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 3; j++) {
      soma += matriz[i][j];
    }
  }

  cout << "Soma dos elementos acima da diagonal principal: " << soma << endl;

  return 0;
}
