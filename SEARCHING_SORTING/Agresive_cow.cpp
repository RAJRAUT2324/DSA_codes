class Solution {
public:
bool sol(vector<int>& stalls, int k,int mid)
{
    int c=1;
    int pos=stalls[0];
    for(int i=1;i<stalls.size();i++)
    {
    if(stalls[i]-pos>=mid)
    {
        c++;
        pos=stalls[i];
    }
    if(c==k) return true; 
    }
    return false;
}
    int aggressiveCows(vector<int>& stalls, int k) {
        sort(stalls.begin(),stalls.end());
        int s=0;
        int e=stalls[stalls.size()-1]-stalls[0];
        int ans=-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(sol(stalls,k,mid))
            {
                ans=mid;
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return ans;
    }
};