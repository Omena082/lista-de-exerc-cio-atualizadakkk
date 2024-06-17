#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int vetor1[SIZE], vetor2[SIZE], vetorResultante[SIZE];

  cout << "Digite 10 valores para o primeiro vetor:" << endl;
  for(int i = 0; i < SIZE; i++) {
    cin >> vetor1[i];
    }


  cout << "Digite 10 valores para o segundo vetor:" << endl;
  for(int i = 0; i < SIZE; i++) {
    cin >> vetor2[i];
  }


  for(int i = 0; i < SIZE; i++) {
  if(i % 2 == 0) {
  vetorResultante[i] = vetor1[i];
  } else {
    vetorResultante[i] = vetor2[i];
  }
}

  cout << "Vetor resultante:" << endl;
  for(int i = 0; i < SIZE; i++) {
    cout << vetorResultante[i] << " ";
  }
  cout << endl;

    return 0;
}
