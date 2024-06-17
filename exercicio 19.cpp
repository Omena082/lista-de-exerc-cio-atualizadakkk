
#include <iostream>
using namespace std;

int main() {
  int mat[5][4];
  int maiorNota = 0;
  int matMaiorNota = 0;
  int somaNotas = 0;

  // Leitura das informa��es dos alunos
  for (int i = 0; i < 5; i++) {
    cout << "Digite a matr�cula do aluno " << i + 1 << ": ";
    cin >> mat[i][0];
    cout << "Digite a m�dia das provas do aluno " << i + 1 << ": ";
    cin >> mat[i][1];
    cout << "Digite a m�dia dos trabalhos do aluno " << i + 1 << ": ";
    cin >> mat[i][2];

    // C�lculo da nota final
    mat[i][3] = mat[i][1] + mat[i][2];

    // Encontrando a maior nota
    if (mat[i][3] > maiorNota) {
      maiorNota = mat[i][3];
      matMaiorNota = mat[i][0];
    }

    somaNotas += mat[i][3];
  }

  // Imprimindo a matr�cula do aluno com a maior nota
  cout << "A matr�cula do aluno com a maior nota final �: " << matMaiorNota << endl;

  // Imprimindo a m�dia aritm�tica das notas finais
  cout << "A m�dia aritm�tica das notas finais �: " << (double)somaNotas / 5 << endl;

  return 0;
}
