#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(-4);
    arr.push_back(5);
    arr.push_back(-1);

    // suffixMin size = arr.size() - 1
    vector<int> suffixMin(arr.size() - 1);

    // last suffix minimum
    suffixMin[suffixMin.size() - 1] = arr[arr.size() - 1];

    // build suffix minimum
    //why this logic is correct -> because we have to find the min element of the i+1 to n
    for (int i = suffixMin.size() - 2; i >= 0; i--) {
        suffixMin[i] = min(suffixMin[i + 1], arr[i + 1]);
    }

    // print result
    for (int i = 0; i < suffixMin.size(); i++) {
        cout << "At index " << i << " minimum element is: "
             << suffixMin[i] << endl;
    }

    return 0;
}
