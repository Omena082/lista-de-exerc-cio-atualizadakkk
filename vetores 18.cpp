#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector<int>num(10);
  int x;
  int cont = 0;

  cout << "Fala 10 numeros:\n\n";
  for(int i = 0; i < 10; i++){
    cout << "Numero " << i + 1 << ": ";
    cin >> num[i];
  }

  cout << "\nDigite um numero x: ";
  cin >> x;

  cout << "\nMultiplos de " << x << " são: ";
  for(int i = 0; i < 10; i++){
    if(num[i] % x == 0){
      cout << num[i] << " ";
      cont++;
    }
  }

  cout << "\nNumero de multiplos de " << x << ": " << cont << endl;

  return 0;
}
