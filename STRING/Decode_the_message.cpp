class Solution {
public:
    void createMapping(unordered_map<char,char>&mapping ,string key)
    {  char start='a';
        for(int i=0;i<key.length();i++)
        {   char ch=key[i];
            if(mapping.find(ch)==mapping.end())
            {
            mapping[ch]=start;
            start++;
            }
            
           
        }
    }
    string decode(unordered_map<char,char>&mapping, string message)
    {
    string ans="";
    for(int i=0;i<message.length();i++)
    {
        char ch=message[i];
        char a=mapping[ch];
        ans.push_back(a);
    }
    return ans;
    }
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mapping;
        char space=' ';
        mapping[space]=' ';
        createMapping(mapping,key);
        string ans=decode(mapping,message);
        return ans;

    }
};

// Input: key = "the quick brown fox jumps over the lazy dog", message = "vkbs bs t suepuv"
// Output: "this is a secret"
// Explanation: The diagram above shows the substitution table.
// It is obtained by taking the first appearance of each letter in "the quick brown fox jumps over the lazy dog".