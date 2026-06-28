class Solution {
public:
    int compress(vector<char>& chars) {
        string ans="";
        int i=0;

        while(i < chars.size())
        {
            int j = i + 1;
            ans.push_back(chars[i]);

            while(j < chars.size() && chars[j] == chars[i])
            {
                j++;
            }

            int count = j - i;

            if(count > 1)
            {
                string temp = to_string(count);
                for(char x : temp)
                {
                    ans.push_back(x);
                }
            }

            i = j;
        }

        chars.clear();

        for(char x : ans)
        {
            chars.push_back(x);
        }

        return ans.length();
    }
};
 String Compression