#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vector1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> vector2{5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    vector<int> intersection;

    sort(vector1.begin(), vector1.end());
    sort(vector2.begin(), vector2.end());

    set_intersection(vector1.begin(), vector1.end(),
                     vector2.begin(), vector2.end(),
                     back_inserter(intersection));

    intersection.erase(unique(intersection.begin(), intersection.end()), intersection.end());

    cout << "Intersection of the two vectors: ";
    for (const auto& num : intersection) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
