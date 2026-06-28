class Solution {
public:
void code(char ch,string& s,int n)
{
    for(int i=0;i<n;i++)
    {
        s.push_back(ch);
    }
}
    string frequencySort(string s) {
       map<char,int>mp;
       vector<int>arr;
       for(int i=0;i<s.length();i++)
       {
        char ch=s[i];
        mp[ch]++;
       }
       for(auto x : mp)
       {
        arr.push_back(x.second);
       }
       sort(arr.begin(),arr.end());
       reverse(arr.begin(),arr.end());
       string ans="";
       for(int i=0;i<arr.size();i++)
       {
        for(auto x : mp)
       {
        if(x.second==arr[i] && ans.find(x.first)==string::npos)
        {
            char ch=x.first;
            code(ch,ans,arr[i]);
            break;
        }
       }
       }
       return ans;
    }
};
451. Sort Characters By Frequency