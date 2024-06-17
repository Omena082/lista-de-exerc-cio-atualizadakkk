#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<double> num(10);

  for (int i = 0; i < 10; i++) {
    cout << "Digite um número: " << endl;
    cin >> num[i];
  }

  for (int i = 0; i < 10; i++) {
    if (num[i] < 0) {
      num[i] = 0;
    }
  }

  cout << "Vetor modificado: " << endl;
  for (int i = 0; i < 10; i++) {
    cout << num[i] << " ";
  }

  return 0;
}
