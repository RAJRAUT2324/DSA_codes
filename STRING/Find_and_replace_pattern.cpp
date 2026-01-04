class Solution {
public:
    string normalize(string pattern)
    {  
        char start = 'a';
        unordered_map<char, char> mapping;
        string result = pattern;

        for (int i = 0; i < pattern.length(); i++)
        {
            char ch = pattern[i]; // ✅ Declare ch
            if (mapping.find(ch) == mapping.end())
            {
                mapping[ch] = start;
                start++;
            }
        }

        // Use mapping
        for (int i = 0; i < pattern.length(); i++)
        {
            char ch = pattern[i];
            char mappedElement = mapping[ch];
            result[i] = mappedElement;
        }
        return result;
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        vector<string> arr;
        string normalizedPattern = normalize(pattern);  // ✅ Store normalized pattern

        for (int i = 0; i < words.size(); i++)
        {
            string normalizedWord = normalize(words[i]);  // ✅ Store normalized word
            if (normalizedWord == normalizedPattern)      // ✅ Compare normalized strings
            {
                arr.push_back(words[i]);  // ✅ Push original word
            }
        }
        return arr;
    }
};

// Example 1:

// Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
// Output: ["mee","aqq"]
// Explanation: "mee" matches the pattern because there is a permutation {a -> m, b -> e, ...}. 
// "ccc" does not match the pattern because {a -> c, b -> c, ...} is not a permutation, since a and b map to the same letter.