
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float matriz1[2][2], matriz2[2][2], resultado[2][2], constante;
  char opcao;

  // Leitura das matrizes
  cout << "Digite os elementos da primeira matriz 2x2:" << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> matriz1[i][j];
    }
  }

  cout << "Digite os elementos da segunda matriz 2x2:" << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> matriz2[i][j];
    }
  }

  // Menu de opções
  cout << "\nEscolha uma opção:" << endl;
  cout << "(a) Somar as duas matrizes" << endl;
  cout << "(b) Subtrair a primeira matriz da segunda" << endl;
  cout << "(c) Adicionar uma constante às duas matrizes" << endl;
  cout << "(d) Imprimir as matrizes" << endl;
  cin >> opcao;

  switch (opcao) {
    case 'a': // Somar as matrizes
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
          resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
      }
      cout << "\nMatriz resultante da soma:" << endl;
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
          cout << setw(5) << resultado[i][j] << " ";
        }
        cout << endl;
      }
      break;

    case 'b': // Subtrair as matrizes
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
          resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
      }
      cout << "\nMatriz resultante da subtração:" << endl;
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
          cout << setw(5) << resultado[i][j] << " ";
        }
        cout << endl;
      }
      break;

    case 'c': // Adicionar uma constante
      cout << "Digite o valor da constante: ";
      cin >> constante;

      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
          matriz1[i][j] += constante;
          matriz2[i][j] += constante;
        }
      }
      cout << "\nMatrizes após a adição da constante:" << endl;
      cout << "Matriz 1:" << endl;
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
          cout << setw(5) << matriz1[i][j] << " ";
        }
        cout << endl;
      }
      cout << "Matriz 2:" << endl;
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
          cout << setw(5) << matriz2[i][j] << " ";
        }
        cout << endl;
      }
      break;

    case 'd': // Imprimir as matrizes
      cout << "\nMatriz 1:" << endl;
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
          cout << setw(5) << matriz1[i][j] << " ";
        }
        cout << endl;
      }
      cout << "\nMatriz 2:" << endl;
      for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
          cout << setw(5) << matriz2[i][j] << " ";
        }
        cout << endl;
      }
      break;

    default:
      cout << "Opção inválida!" << endl;
  }

  return 0;
}
