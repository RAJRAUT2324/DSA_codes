class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        map<string,int>mp1;
        map<string,int>mp2;
        int count=0;
        for(auto x : message)
        {
            mp1[x]++;
        }
        for(auto x : bannedWords)
        {
            mp2[x]++;
        }
        for(int i=0;i<message.size();i++)
        {
            string temp=message[i];
            if(mp2.find(temp)!=mp2.end())
            {
                count++;
            }
        }
    return count>=2;
    }
};
Report Spam Message