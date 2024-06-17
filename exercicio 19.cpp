
#include <iostream>
using namespace std;

int main() {
  int mat[5][4];
  int maiorNota = 0;
  int matMaiorNota = 0;
  int somaNotas = 0;

  // Leitura das informações dos alunos
  for (int i = 0; i < 5; i++) {
    cout << "Digite a matrícula do aluno " << i + 1 << ": ";
    cin >> mat[i][0];
    cout << "Digite a média das provas do aluno " << i + 1 << ": ";
    cin >> mat[i][1];
    cout << "Digite a média dos trabalhos do aluno " << i + 1 << ": ";
    cin >> mat[i][2];

    // Cálculo da nota final
    mat[i][3] = mat[i][1] + mat[i][2];

    // Encontrando a maior nota
    if (mat[i][3] > maiorNota) {
      maiorNota = mat[i][3];
      matMaiorNota = mat[i][0];
    }

    somaNotas += mat[i][3];
  }

  // Imprimindo a matrícula do aluno com a maior nota
  cout << "A matrícula do aluno com a maior nota final é: " << matMaiorNota << endl;

  // Imprimindo a média aritmética das notas finais
  cout << "A média aritmética das notas finais é: " << (double)somaNotas / 5 << endl;

  return 0;
}
