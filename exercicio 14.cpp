#include <iostream>
#include <cstdlib>
#include <ctime>
#include <set>

using namespace std;

int main() {
  srand(time(0)); // Inicializa a semente para n�meros aleat�rios

  set<int> numeros; // Conjunto para armazenar n�meros �nicos

  // Gera 25 n�meros aleat�rios �nicos
  while (numeros.size() < 25) {
    int numero = rand() % 100; // Gera n�mero aleat�rio entre 0 e 99
    numeros.insert(numero); // Insere n�mero no conjunto
  }

  // Exibe a cartela de bingo
  cout << "Cartela de Bingo:\n";
  int contador = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << *(numeros.begin() + contador) << " ";
      contador++;
    }
    cout << endl;
  }

  return 0;
}
