#include <iostream>
using namespace std;

int main() {
  int notas[10][3];
  int piorProva[10];
  int contProva1 = 0, contProva2 = 0, contProva3 = 0;

  // Leitura das notas
  for (int i = 0; i < 10; i++) {
    cout << "Digite as notas do aluno " << i + 1 << ": ";
    for (int j = 0; j < 3; j++) {
      cin >> notas[i][j];
    }
  }

  // Encontra a pior nota de cada aluno
  for (int i = 0; i < 10; i++) {
    piorProva[i] = 0;
    for (int j = 1; j < 3; j++) {
      if (notas[i][j] < notas[i][piorProva[i]]) {
        piorProva[i] = j;
      }
    }
  }

  // Conta os alunos com pior nota em cada prova
  for (int i = 0; i < 10; i++) {
    if (piorProva[i] == 0) {
      contProva1++;
    } else if (piorProva[i] == 1) {
      contProva2++;
    } else {
      contProva3++;
    }
  }

  cout << "Número de alunos com pior nota na prova 1: " << contProva1 << endl;
  cout << "Número de alunos com pior nota na prova 2: " << contProva2 << endl;
  cout << "Número de alunos com pior nota na prova 3: " << contProva3 << endl;

  return 0;
}
