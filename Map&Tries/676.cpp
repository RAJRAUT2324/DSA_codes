// match till mismatched found
// try on mismatch
// no mismatch allowed onwards

struct TrieNode {
public:
    char val;
    unordered_map<int, TrieNode*> children; // ascii, child
    bool isTerminal;
    TrieNode(char val) : val(val), isTerminal(false) {};
};

class MagicDictionary {
public:

    TrieNode* root;

    MagicDictionary() {
        root = new TrieNode('-');
    }

    void storeWordInTrie(int &i, TrieNode* &tempRoot, string &word) {
        // bc
        if (i >= word.length()) {
            // mark tempRoot isTerminal - bc its last node of str
            tempRoot->isTerminal = true;
            return;
        }

        char ch = word[i];
        // not present then create and store
        if (!tempRoot->children[ch]) {
            tempRoot->children[ch] = new TrieNode(ch);
        }
        
        // call for further index
        i++;
        return storeWordInTrie(i, tempRoot->children[ch], word);
    }
    
    void buildDict(vector<string> dictionary) {
        for (auto word : dictionary) {
            int i = 0;
            TrieNode* tempRoot = root;
            storeWordInTrie(i, tempRoot, word);
        }
    }
    

    bool searchHelper(int &i, TrieNode* &tempRoot, bool mismatched, string &searchWord) {
        // bc
        // out of bound
        if (i >= searchWord.length()) {
            // tempRoot pointing to last node
            // its terminal && atleast one time mismatched - valid word
            return tempRoot->isTerminal && mismatched;
        }

        // matched case first then unmatched case - very important - stuck on hello, hallo case
        char ch = searchWord[i];
        // matched 
        if (tempRoot->children.find(ch) != tempRoot->children.end()) {
            // go for further call
            i++;
            if (searchHelper(i, tempRoot->children[ch], mismatched, searchWord)) return true;
            // no matched further then go for below condn
            // bt
            i--;
        }


        // not matched - means not present
        // check if previous is also mismatched
        if (mismatched) {
            // cant do twice
            return false;
        }

        // first time mismatched
        // mark mismatched
        mismatched = true;
        // traverse on children
        for (auto &[childChar, childNode] : tempRoot->children) {
            // pick from the child
            i++;
            bool ans = ch != childChar && searchHelper(i, childNode, mismatched, searchWord);
            // if ans found
            if (ans) return true;

            // not found
            // bt
            i--;
        }

        // not found from any branch
        return false;
    }

    bool search(string searchWord) {
        int i = 0;
        TrieNode* tempRoot = root;
        bool mismatched = false;
        return searchHelper(i, tempRoot, mismatched, searchWord);
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */