#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(0));

  int matriz[4][4];
  int matriz_triangular[4][4];

  // Gerar matriz 4x4 com valores aleatórios entre 1 e 20
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      matriz[i][j] = rand() % 20 + 1;
    }
  }

  // Imprimir matriz original
  cout << "Matriz original:" << endl;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  // Transformar em matriz triangular inferior
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (j > i) {
        matriz_triangular[i][j] = 0;
      } else {
        matriz_triangular[i][j] = matriz[i][j];
      }
    }
  }

  // Imprimir matriz triangular inferior
  cout << "\nMatriz triangular inferior:" << endl;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cout << matriz_triangular[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
