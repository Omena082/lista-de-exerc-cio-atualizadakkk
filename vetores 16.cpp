#include <iostream>
#include <vector>
using namespace std;

void lista_direta(){

  vector<int>num(5);

  cout << "Digite 5 numeros:\n\n";
  for(int i = 0; i < 5; i++){
    cout << "Numero " << i + 1 << ": ";
    cin >> num[i];
  }

  cout << "\nA lista direta: ";
  for(int i = 0; i < 5; i++){
    cout << num[i] << " ";
  }
}

void lista_inversa(){

  vector<int>num(5);

  cout << "\n\nDigite 5 numeros:\n\n";
  for(int i = 0; i < 5; i++){
    cout << "Numero " << i + 1 << ": ";
    cin >> num[i];
  }

  cout << "\nA lista inversa: ";
  for(int i = 4; i >= 0; i--){
    cout << num[i] << " ";
  }
}
int main(){

  int escolha;

  cout << "Escolha:\n";
  cout << "{0} = Programa finalizado" << endl;
  cout << "{1} = Lista direta" << endl;
  cout << "{2} = lista inversa" << endl;
  cin >> escolha;

  switch(escolha){
    case 0:
      cout << "Programa finalizado" << endl;
      break;
    case 1:
      lista_direta();
      break;
    case 2:
      lista_inversa();
      break;
    default:
      cout << "Opção invalida" << endl;
      break;
  }
  return 0;
}
