
#include <iostream>
using namespace std;

int main() {
  int matriz[3][3];
  int vetor[3] = {0};

  cout << "Digite os elementos da matriz 3x3:\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> matriz[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      vetor[i] += matriz[j][i];
    }
  }

  cout << "\nO vetor resultante da soma das colunas da matriz e':\n";
  for (int i = 0; i < 3; i++) {
    cout << vetor[i] << " ";
  }
  cout << endl;

  return 0;
}
