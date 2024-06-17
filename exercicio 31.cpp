#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vector1(10);
    vector<int> vector2(10);

    sort(vector1.begin(), vector1.end());
    sort(vector2.begin(), vector2.end());

    vector<int> mergedVector(vector1.size() + vector2.size());
    auto it = set_union(vector1.begin(), vector1.end(), vector2.begin(), vector2.end(), mergedVector.begin());
    mergedVector.resize(it - mergedVector.begin());

    auto last = unique(mergedVector.begin(), mergedVector.end());
    mergedVector.erase(last, mergedVector.end());

    return 0;
}
