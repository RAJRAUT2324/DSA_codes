class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        vector<int>arr;
        for(auto x:nums)
        {
            pq.push(x);
        }
        while(!pq.empty())
        {
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();

            arr.push_back(b);
            arr.push_back(a);

        }
        return arr;
    }
};