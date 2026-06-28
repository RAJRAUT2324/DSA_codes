class Solution {
public:
    string freqAlphabets(string s) {
        map<string,char> mp;
        string ans="";

        for(int i=1;i<=26;i++)
        {
            string key = to_string(i);
            if(i>=10) key += "#";
            mp[key] = 'a' + i - 1;
        }

        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='#' && i-2>=0)
            {
                string temp="";
                temp.push_back(s[i-2]);
                temp.push_back(s[i-1]);
                temp.push_back('#');
                
                ans.push_back(mp[temp]);
                i -= 2;
            }
            else
            {
                string temp="";
                temp.push_back(s[i]);
                ans.push_back(mp[temp]);
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};Decrypt String from Alphabet to Integer Mapping