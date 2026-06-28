class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int> mp;

        char ch = 'a';
        for(int i = 26; i >= 1; i--) {
            mp[ch] = i;
            ch++;
        }

        int sum = 0;

        for(int i = 0; i < s.length(); i++) {
            sum += mp[s[i]] * (i + 1);
        }

        return sum;
    }
};
 Reverse Degree of a String