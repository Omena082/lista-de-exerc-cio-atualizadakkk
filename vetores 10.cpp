#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<double>media(15);
  double soma = 0;

  for(int i = 0; i < 15; i++){
    cout << "Digite a nota do aluno: " << i + 1 << ": ";
    cin >> media[i];
  }

  for(int i = 0; i < 15; i++){
    soma += media[i];
  }

  cout << "\n\nA media da turma é: " << soma / 15 << endl;

  return 0;
}
