class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();
    vector<int>pre(n,1);
    vector<int>pos(n,1);
    vector<int>f;
    int pre_pro=1;
    int pos_pro=1;
    for(int i=1;i<n;i++)
    {
        pre_pro=pre_pro*nums[i-1];
        pre[i]=pre_pro;
    }
    for(int i=n-2;i>=0;i--)
    {
        pos_pro=pos_pro*nums[i+1];
        pos[i]=pos_pro;
    }
    for(int i=0;i<n;i++)
    {
        f.push_back(pre[i]*pos[i]);
    }
    return f;
    }
};
Product of Array Except Self (238)