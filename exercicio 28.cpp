#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> v;
    vector<int> v1;
    vector<int> v2;

    int num;

    for (int i = 0; i < 10; i++) {
        cin >> num;
        v.push_back(num);
    }

    for (int i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            v2.push_back(v[i]);
        } else {
            v1.push_back(v[i]);
        }
    }

    cout << "Elementos utilizados de v1: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << "Elementos utilizados de v2: ";
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;

    return 0;
}
