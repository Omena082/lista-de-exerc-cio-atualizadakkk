#include <iostream>
#include <vector>
using namespace std;

int main(){

vector<int>numeros(6);

cout << "Fale 6 numeros pares:\n" << endl;
for(int i = 0; i < 6; i++){
  cout << "Numero " << i + 1 << ": ";
  cin >> numeros[i];
  if(numeros[i] % 2 != 0){
    cout << "Numero invalido" << endl;
    return 1;
  }
}

cout << "\nLista dos numeros pares inversa: ";
for(int i = 5; i >= 0; i--){
  cout << numeros[i] << " ";
}

return 0;
}
