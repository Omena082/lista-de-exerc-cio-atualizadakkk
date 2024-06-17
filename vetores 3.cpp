#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<double>numeros(10);
  vector<double>quadrados(10);

  cout << "\nFale 10 numeros reais:\n";
  for(int i = 0; i < 10; i++){
    cout << "\nNumero " << i + 1 << ": ";
    cin >> numeros[i];
  }
  for(int i = 0; i < 10; i++){
    quadrados[i] = numeros[i] * numeros[i];
  }
  cout << "\nNumeros Reais:\n";
  for(int i = 0; i < 10; i++){
    cout << numeros[i] << " ";
  }
  cout << "\nNumeros Quadrados:\n";
  for(int i = 0; i < 10; i++){
    cout << quadrados[i] << " ";
  }
  return 0;
}
