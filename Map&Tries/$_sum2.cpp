class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2,
                     vector<int>& nums3, vector<int>& nums4) {

        unordered_map<int, int> mp;

        // Store frequency of every nums3[i] + nums4[j]
        for (auto x : nums3) {
            for (auto y : nums4) {
                mp[x + y]++;
            }
        }

        int count = 0;

        // Find the required opposite sum
        for (auto x : nums1) {
            for (auto y : nums2) {

                int required = -(x + y);

                if (mp.find(required) != mp.end()) {
                    count += mp[required];
                }
            }
        }

        return count;
    }
};