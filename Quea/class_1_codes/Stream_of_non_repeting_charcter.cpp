class Solution {
  public:
    string firstNonRepeating(string &s) {
        unordered_map<char,int>freq;
        deque<char>dq;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            freq[ch]++;
            dq.push_back(ch);
            
            while(!dq.empty())
            {
                char frontelement=dq.front();
                if(freq[frontelement]==1)
                {
                    ans.push_back(frontelement);
                    break;
                }
                else
                {
                    dq.pop_front();
                }
            }
            if(dq.empty())
            {
                ans.push_back('#');
            }
        }
        return ans;
    }
};
Stream First Non-repeating
Difficulty: MediumAccuracy: 31.65%Submissions: 226K+Points: 4Average Time: 15m
Given a string s consisting of only lowercase alphabets, for each index i in the string (0 ≤ i < n), find the first non-repeating character in the prefix s[0..i]. If no such character exists, use '#'.

Examples:

Input: s = "aabc"
Output: a#bb
Explanation: 
At i=0 ("a"): First non-repeating character is 'a'.
At i=1 ("aa"): No non-repeating character, so '#'.
At i=2 ("aab"): First non-repeating character is 'b'.
At i=3 ("aabc"): Non-repeating characters are 'b' and 'c'; 'b' appeared 