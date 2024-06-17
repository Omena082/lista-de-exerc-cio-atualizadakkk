#include <iostream>
#include <string>
using namespace std;

int main() {
  char matriz[5][10];
  char gabarito[10];
  int resultado[5] = {0};

  // Leitura da matriz de respostas
  cout << "Digite as respostas dos alunos (a, b, c ou d):\n";
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> matriz[i][j];
    }
  }

  // Leitura do gabarito
  cout << "Digite o gabarito (a, b, c ou d):\n";
  for (int i = 0; i < 10; i++) {
    cin >> gabarito[i];
  }

  // Verifica��o das respostas e c�lculo da pontua��o
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 10; j++) {
      if (matriz[i][j] == gabarito[j]) {
        resultado[i]++;
      }
    }
  }

  // Impress�o dos resultados
  cout << "\nResultados:\n";
  for (int i = 0; i < 5; i++) {
    cout << "Aluno " << i + 1 << ": " << resultado[i] << " pontos\n";
  }

  return 0;
}
