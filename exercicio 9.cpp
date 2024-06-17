#include<iostream>
using namespace std;
int main()
{
    int list[6] = {1, 0, 5, -2, -5, 7};
    int soma = list[0] + list[1] + list[5];

    cout << "A soma dos numeros das posições 0, 1, 5 o resultado: " << soma << endl;

    list[4] = 100;

    for(int i = 0; i < 6; i++){
        cout << list[i] << endl;
    }
    return 0;
}
