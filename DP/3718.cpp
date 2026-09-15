class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> seen(nums.begin(), nums.end());

        int cur = k;
        while (seen.count(cur)) {
            cur += k;
        }

        return cur;
    }
};

//non dp-simpl elogic
//impressive logic not dp just an good logic hence put in this module