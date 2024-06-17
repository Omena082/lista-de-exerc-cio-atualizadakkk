#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int>numero(10);

  cout << "Digite 10 numeros:\n\n";
  for(int i = 0; i < 10; i++){
    cout << "Numero " << i + 1 << ": ";
    cin >> numero[i];
  }
  bool iguais = false;
  for(int i = 0; i < 10; i++){
    for(int j = i + 1; j < 10; j++){
      if(numero[i] == numero[j]){
        cout << "\nOs numeros iguais: " << numero[i] << endl;
        iguais = true;
      }
    }
  }
  return 0;
}
