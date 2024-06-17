#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
  // Gabarito da prova
  char gabarito[10];
  cout << "Digite o gabarito da prova (a, b, c, d ou e): ";
  for (int i = 0; i < 10; i++) {
    cin >> gabarito[i];
  }

  // Dados dos alunos
  int matricula;
  char respostas[10];
  vector<int> notas;

  for (int aluno = 1; aluno <= 3; aluno++) {
    cout << "\nAluno " << aluno << ":" << endl;
    cout << "Digite a matrícula: ";
    cin >> matricula;

    cout << "Digite as respostas do aluno (a, b, c, d ou e): ";
    for (int i = 0; i < 10; i++) {
      cin >> respostas[i];
    }

    // Calcula a nota do aluno
    int nota = 0;
    for (int i = 0; i < 10; i++) {
      if (respostas[i] == gabarito[i]) {
        nota++;
      }
    }
    notas.push_back(nota);

    // Imprime os dados do aluno
    cout << "Matrícula: " << matricula << endl;
    cout << "Respostas: ";
    for (int i = 0; i < 10; i++) {
      cout << respostas[i] << " ";
    }
    cout << endl;
    cout << "Nota: " << nota << endl;
  }

  // Calcula o percentual de aprovação
  int aprovados = 0;
  for (int i = 0; i < notas.size(); i++) {
    if (notas[i] >= 7) {
      aprovados++;
    }
  }
  double percentualAprovacao = (double)aprovados / notas.size() * 100;

  cout << "\nPercentual de aprovação: " << fixed << setprecision(2) << percentualAprovacao << "%" << endl;

  return 0;
}
