class Solution {
public:
    int longestBalanced(string s) {
        int n = s.length();
        int maxLen = 0;

        for (int i = 0; i < n; ++i) {
            vector<int> freq(26, 0);
            int distinctCount = 0;

            for (int j = i; j < n; ++j) {
                int charIdx = s[j] - 'a';
                if (freq[charIdx] == 0) {
                    distinctCount++;
                }
                freq[charIdx]++;

                // The substring length must be a multiple of the number of distinct characters
                int currentLen = j - i + 1;
                if (currentLen % distinctCount == 0) {
                    int targetFreq = currentLen / distinctCount;
                    bool isBalanced = true;

                    // Check if all present characters match the target frequency
                    for (int k = 0; k < 26; ++k) {
                        if (freq[k] > 0 && freq[k] != targetFreq) {
                            isBalanced = false;
                            break;
                        }
                    }

                    if (isBalanced) {
                        maxLen = max(maxLen, currentLen);
                    }
                }
            }
        }
        return maxLen;
    }
};