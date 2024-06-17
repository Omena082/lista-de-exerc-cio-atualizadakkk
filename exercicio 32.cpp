#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <set>

using namespace std;

int main() {
    vector<int> x(5);
    vector<int> y(5);

    cout << "Digite 5 elementos para o vetor x (sem repetição): ";
    for(int i = 0; i < 5; i++) {
        cin >> x[i];
    }

    cout << "Digite 5 elementos para o vetor y (sem repetição): ";
    for(int i = 0; i < 5; i++) {
        cin >> y[i];
    }

    vector<int> soma(5);
    for(int i = 0; i < 5; i++) {
        soma[i] = x[i] + y[i];
    }

    cout << "Soma entre x e y: ";
    for(int i = 0; i < 5; i++) {
        cout << soma[i] << " ";
    }
    cout << endl;

    vector<int> produto(5);
    for(int i = 0; i < 5; i++) {
        produto[i] = x[i] * y[i];
    }

    cout << "Produto entre x e y: ";
    for(int i = 0; i < 5; i++) {
        cout << produto[i] << " ";
    }
    cout << endl;

    vector<int> diferenca;
    for(int i = 0; i < 5; i++) {
        if(find(y.begin(), y.end(), x[i]) == y.end()) {
            diferenca.push_back(x[i]);
        }
    }

    cout << "Diferença entre x e y: ";
    for(int i = 0; i < diferenca.size(); i++) {
        cout << diferenca[i] << " ";
    }
    cout << endl;

    vector<int> interseccao;
    for(int i = 0; i < 5; i++) {
        if(find(y.begin(), y.end(), x[i]) != y.end()) {
            interseccao.push_back(x[i]);
        }
    }

    cout << "Intersecção entre x e y: ";
    for(int i = 0; i < interseccao.size(); i++) {
        cout << interseccao[i] << " ";
    }
    cout << endl;

    set<int> uniao_set(x.begin(), x.end());
    for(int i = 0; i < 5; i++) {
        uniao_set.insert(y[i]);
    }

    cout << "União entre x e y: ";
    for(auto it = uniao_set.begin(); it != uniao_set.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
