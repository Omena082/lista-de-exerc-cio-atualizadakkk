#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int>vetor(50);

  for (int i = 0; i < 50; ++i) {
      vetor[i] = (i + 5 * i) % (i + 1);
  }

  for (int i = 0; i < 50; ++i) {
      cout << vetor[i] << " ";
  }

  return 0;
}
