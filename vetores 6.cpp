#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> vetor(10);
  int maior, menor;
  cout << "Digite 10 numeros: " << endl;
  for (int i = 0; i < 10; i++) {

    cout << "numero " << i + 1 << ": ";
    cin >> vetor[i];
  }
  maior = vetor[0];
  menor = vetor[0];

  for (int i = 1; i < 10; i++) {
    if (vetor[i] > maior) {
      maior = vetor[i];
    }
    if (vetor[i] < menor) {
      menor = vetor[i];
    }
  }
  cout << "O valor maior é: " << maior << endl;
  cout << "O valor menor é: " << menor << endl;

  return 0;
}
