#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector<int>numeros(6);

  cout << "Fale 6 numeros inteiros:\n" << endl;
  for(int i = 0; i < 6; i++){
    cout << "Numeros " << i + 1 << ": ";
    cin >> numeros[i];
  }

  cout << "\nNumeros da lista inverso: ";
  for(int i = 5; i >= 0; i--){
    cout << numeros[i] << " ";
  }

  return 0;
}
