
#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector<int>numeros(5);
  int maior;
  int menor;
  int soma = 0;
  float media;

  cout << "Me fale 5 numeros:\n\n";
  for(int i = 0; i < 5; i++){
    cout << "Numero " << i + 1 << ": ";
    cin >> numeros[i];
    soma += numeros[i];
  }

  maior = numeros[0];
  menor = numeros[0];

  for(int i = 1; i < 5; i++){
    if(numeros[i] > maior){
      maior = numeros[i];
    }
    if(numeros[i] < menor){
      menor = numeros[i];
    }
  }

  media = soma / 5;

  cout << "\nO numero maior: " << maior << endl;
  cout << "O numero menor: " << menor << endl;
  cout << "A media dos numeros: " << media << endl;

  return 0;
}
