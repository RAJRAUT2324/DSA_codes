
//Solved in one attempt using recurtion and logic
class Solution {
public:
    //rotation function
    void solve(string s , vector<string>&arr,int& n)
    {
        char temp='a';
        if(n==0)
        {
            return;
        }
        for(int i=s.size()-1;i>=0;i--)
        {
            if(i==s.size()-1)
            {
                temp=s[i];
            }
            else
            {
                s[i+1]=s[i];
            }
        }
        s[0]=temp;
        n=n-1;
        solve(s,arr,n);
        arr.push_back(s);
    }
    int countRotations(string s, int k) {
        int ans=0;
        vector<string>str;
        int j=s.size();
        solve(s,str,j);
        for(auto x : str){
        int count=0;
        for(int i=0;i<x.size();i++)
        {
            if((i+1<=(x.size()-1)) && (x[i]==x[i+1]))
            {
                count++;
            }
        }
        if(count==k)
        {
            ans++;
        }
        }
        return ans;
    }
};