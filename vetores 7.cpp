#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector<int>numeros(10);
  int maior;
  int local;

  cout << "Me fale 10 numeros: " << endl;
  for(int i = 0; i < 10; i++){
    cout << "Numero " << i + 1 << ": ";
    cin >> numeros[i];
  }

  maior = numeros[0];

  for(int i = 1; i < 10; i++){
    if(numeros[i] > maior){
      maior = numeros[i];
      local = i;
    }
  }

  cout << "O maior numero é: " << maior << endl;
  cout << "A posição do numero maior é: " << local << endl;

  return 0;
}
