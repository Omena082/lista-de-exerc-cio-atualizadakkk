#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector<double>num(10);
  double soma = 0.0;
  double negativo = 0;

  cout << "digite os 10 numeros:\n" << endl;
  for(int i = 0; i < 10; i++){
     cout << "Numero " << i + 1 << ": ";
     cin >> num[i];
  }

  for(double numero : num){
    if(numero < 0){
      ++negativo;
    }
    else{
      soma += numero;
    }
  }

  cout << "\nA soma dos numeros positivos: " << soma << endl;
  cout << "\nA quantidade de numeros negativos: " << negativo << endl;

  return 0;
}
