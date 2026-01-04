#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void solve(const vector<int>& arr, int n, int index, int &mini) {  
    if (index >= n) {
        return;
    }
    mini = min(mini, arr[index]); 
    solve(arr, n, index + 1, mini);
}

int findMinRecursively(const vector<int>& arr, int n) {
    int index = 0;
    int mini = INT_MAX;
    solve(arr, n, index, mini);
    return mini;
}