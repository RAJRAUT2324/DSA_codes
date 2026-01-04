class Solution {
public:
vector<char>solve(vector<char>& s,int n,vector<char>& ans)
{
// base condition // head method
if(n<0)
{
return ans;
}
//all new condition
ans.push_back(s[n]);
solve(s,n-1,ans);
return ans;

}
     vector<char> reverseString(vector<char>& s) {
      vector<char>ans;
      int n=s.size()-1;
      vector<char>arr=solve(s,n,ans);
      return arr;
    }
};

// Example:
// Input:


// s = ['h', 'e', 'l', 'l', 'o']
// Output:

// After executing the function, the array s should be modified to:


// ['o', 'l', 'l', 'e', 'h']