#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> numbers(10);
    vector<pair<int, int>> primePositions;

    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < 10; i++) {
        if (isPrime(numbers[i])) {
            primePositions.push_back(make_pair(numbers[i], i));
        }
    }

    cout << "Prime numbers and their positions in the vector:" << endl;
    for (const auto& pair : primePositions) {
        cout << "Number: " << pair.first << ", Position: " << pair.second << endl;
    }

    return 0;
}
