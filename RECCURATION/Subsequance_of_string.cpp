#include<algorithm>
#include<limits>
class Solution {
public:
void solve(string s, int index,vector<string>&ans,string output)
{
    //base case
    if(index>=s.length())
    {  if (!output.empty())   
        ans.push_back(output);
        return;
    }
    //1 character ke sath khelo
    //include character one
    char ch=s[index];
    output.push_back(ch);
    solve(s,index+1,ans,output);
    //excluding the character
    output.pop_back();
    solve(s,index+1,ans,output);

}
    vector<string> generateAllSubsequences(string s) {
      vector<string>ans;
      string output="";
      int index=0;
      solve(s,index,ans,output);
      sort(ans.begin(),ans.end());
      return ans;
    }
};

// Input:


// s = "abc"
// Output:


// ["", "a", "b", "ab", "c", "ac", "bc", "abc"]