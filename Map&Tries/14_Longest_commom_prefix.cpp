class TrieNode
{
    public:
    char data;
    bool isTerminal;
    int childCount;
    unordered_map<char,TrieNode*>children;

    TrieNode(char val)
    {
        data=val;
        isTerminal=false;
        childCount=0;
    }
};

void insertWord(TrieNode* root,string word)
{
    //base case
    if(word.length()==0)
    {
        root->isTerminal=true;
        return;
    }
    char ch=word[0];
    TrieNode* child;
    if(root->children.find(ch)!=root->children.end())
    {
        //present
        child=root->children[ch];
    }
    else
    {
        //absent
        TrieNode* temp=new TrieNode(ch);
        root->children[ch]=temp;
        child=temp;
        root->childCount++;
    }

    insertWord(child,word.substr(1));
}



string find(TrieNode* root,string word)
{
    string ans="";
    if(root->isTerminal==true)
    {
        return ans;
    }

    for(int i=0;i<word.size();i++)
    {
      if(root->childCount==1)
      {
        ans.push_back(word[i]);
        root=root->children[word[i]];
      }
      else
      {
        break;
      }

       if(root->isTerminal==true)
    {
         break;
    }
    }
    return ans;
}
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        TrieNode* root=new TrieNode('-');

        for(int i=0;i<strs.size();i++)
        {
            insertWord(root,strs[i]);
        }
        
        string ans=find(root,strs[0]);
        return ans;
    }
};