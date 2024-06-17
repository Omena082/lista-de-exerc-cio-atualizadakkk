#include <iostream>
using namespace std;

int main() {
  int matriz[4][4];
  int maior = 0;
  int linha_maior = 0;
  int coluna_maior = 0;

  // Leitura da matriz
  cout << "Digite os elementos da matriz 4x4:\n";
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> matriz[i][j];
    }
  }

  // Impressão da matriz
  cout << "\nMatriz:\n";
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  // Encontrando o maior valor e sua localização
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
        linha_maior = i;
        coluna_maior = j;
      }
    }
  }

  // Imprimindo o maior valor e sua localização
  cout << "\nO maior valor da matriz é " << maior << " na linha " << linha_maior
       << " e coluna " << coluna_maior << endl;

  return 0;
}
