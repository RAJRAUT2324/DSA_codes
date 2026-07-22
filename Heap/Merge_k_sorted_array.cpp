
// This is basic C++ program to merge k sorted arrays 
// Brute force approach using priority queue min heap


class Solution {
  public:
    vector<int> mergeArrays(vector<vector<int>> &mat) {
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<int>arr;
    for(auto x : mat)
    {
        for(auto m : x)
        {
            pq.push(m);
        }
    }
    while(!pq.empty())
    {
        arr.push_back(pq.top());
        pq.pop();
    }
    return arr;
    }
};