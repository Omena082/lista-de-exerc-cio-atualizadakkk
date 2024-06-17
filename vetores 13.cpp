#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector<int>numeros(5);
  int maior = 0;
  int menor = 0;


  cout << "Me fale 5 numeros:\n\n";
  for(int i = 0; i < 5; ++i){
    cout << "Numero " << i + 1 << ": ";
    cin >> numeros[i];

    if(numeros[i] > numeros[maior]){
      maior = i;
    }

    if(numeros[i] < numeros[menor]){
      menor = i;
    }
  }

  cout << "\nA posição do maior: " << maior << " Valor: " << "(" << numeros[maior] << ")" << endl;
  cout << "A posição do menor: " << menor << " Valor: " << "(" << numeros[menor] << ")" << endl;

  return 0;
}
