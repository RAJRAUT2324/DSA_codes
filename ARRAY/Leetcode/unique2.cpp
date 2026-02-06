class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>a(0);
        vector<int>ans;
        for(auto x : arr)
        {
            a[x]++;
        }
        for(auto x : a)
        {
        ans.push_back(x.second);
        }
        sort(ans.begin(),ans.end());
        bool f=true;
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]==ans[i+1]) f=false;
        }
        return f;
    }
};
1207. Unique Number of Occurrences