class TrieNode
{
    public:
    char data;
    bool isTerminal;
    unordered_map<char,TrieNode*>children;

    TrieNode(char val)
    {
        data=val;
        isTerminal=false;
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
    }

    insertWord(child,word.substr(1));
}

bool s(TrieNode* root,string word)
{
    //base case
    if(word.length()==0)
    {
        return root->isTerminal;
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
        return false;
    }

   bool finalans=s(child,word.substr(1));

   return finalans;
}

bool sp(TrieNode* root,string word)
{
    //base case
    if(word.length()==0)
    {
        return true;
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
        return false;
    }

   bool finalans=sp(child,word.substr(1));

   return finalans;
}

class Trie {
public:

TrieNode* root;
    Trie() {
        root=new TrieNode('-');
    }
    
    void insert(string word) {
        insertWord(root,word);
    }
    
    bool search(string word) {
        bool ans=s(root,word);
        return ans;
    }
    
    bool startsWith(string prefix) {
        bool ans=sp(root,prefix);
        return ans;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */