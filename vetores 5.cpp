#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int>numeros(10);
  int contador_pares = 0;

  cout << "Digite 10 numeros:\n";
  for(int i = 0; i < 10; i++){
    cin >> numeros[i];
  }
  for(int i = 0; i < 10; i++){
    if(numeros[i] % 2 == 0){
      contador_pares++;
    }
  }
  cout << "A quantidade dos numeros pare são: " << contador_pares << endl;

  return 0;
}
