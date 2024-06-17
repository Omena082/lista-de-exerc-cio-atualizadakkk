#include<iostream>
using namespace std;
int main()
{
    int list[6];

    for(int i = 0; i < 6; i++){
        cout << "Numero " << i + 1 << ": ";
        cin >> list[i];
    }
    cout << "\nO valores lidos foram: \n\n";
    for(int i = 0; i < 6; i++){
        cout << list[i] << " ";
    }
    return 0;
}
