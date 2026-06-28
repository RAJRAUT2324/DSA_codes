class Solution {
public:
void solve(string num1,string num2,int n1l,int n2l,int& c,string & ans)
{   int sum=0;
    if(n1l<0 && n2l<0) return;
    int val1= n1l>=0 ? num1[n1l]-'0' : 0;
    int val2= n2l>=0 ? num2[n2l]-'0' : 0;
    sum=c+val1+val2;
    if(sum >9)
    {
        ans.push_back((sum % 10) + '0');
        c=sum/10;
    }
    else
    {
     ans.push_back((sum ) + '0');
     c=0;
    }
    
    solve(num1,num2,--n1l,--n2l,c,ans);

}
    string addStrings(string num1, string num2) {
        string ans="";
        int c=0;
        solve(num1,num2,num1.size()-1,num2.size()-1,c,ans);
        if(c>0)
        {
            ans.push_back(c+'0');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};