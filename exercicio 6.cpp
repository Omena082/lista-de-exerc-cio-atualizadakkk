#include <iostream>
using namespace std;

int main() {
  int matriz[5][5];
  int x, i, j;
  bool encontrado = false;

  // Leitura da matriz
  cout << "Digite os elementos da matriz 5x5:\n";
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      cin >> matriz[i][j];
    }
  }

  // Leitura do valor X
  cout << "Digite o valor X a ser buscado: ";
  cin >> x;

  // Busca do valor X na matriz
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (matriz[i][j] == x) {
        encontrado = true;
        cout << "Valor " << x << " encontrado na linha " << i + 1 << ", coluna " << j + 1 << endl;
        break;
      }
    }
    if (encontrado) {
      break;
    }
  }

  // Mensagem de "não encontrado"
  if (!encontrado) {
    cout << "Valor " << x << " não encontrado na matriz." << endl;
  }

  return 0;
}
