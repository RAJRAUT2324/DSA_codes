class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>arr;
        map<int,int>mp;
        for(auto x :nums)
        {
            mp[x]++;
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(mp.find(i)==mp.end())
            {
                arr.push_back(i);
            }
        }
        return arr;
    }
};

Code
Testcase
Testcase
Test Result
448. Find All Numbers Disappeared in an Array