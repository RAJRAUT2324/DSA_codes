//Solved by my logic in o(n) time complexity.

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       priority_queue<int, vector<int>, greater<int>> pq;
       int count=0;
       for(auto x : nums)
       {
        pq.push(x);
       }
       int sub=0;
       while(pq.size()!=0)
       {
        int val=pq.top();
        int ans=val-sub;
        if(ans!=0)
        {
            count++;
        }
        sub=abs(sub)+abs(ans);
        pq.pop();

       }
       return count;
    }
};