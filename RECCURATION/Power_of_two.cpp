class Solution {
public:
bool solve(int n,long long value)
{
    if(n==value) return true;
    if(value>n) return false;
    long long temp=2*value; 
    bool t=solve(n,temp);
    return t;
}
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        long long value=2;
        bool ans=solve(n,value);
        return ans;
    }
};. Power of Two