class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        if (m == 0 || a.size() == 0) return 0;

        sort(a.begin(), a.end());

        int ans = INT_MAX;

        for (int i = 0; i <= a.size() - m; i++) {
            int diff = a[i + m - 1] - a[i];
            ans = min(ans, diff);
        }

        return ans;
    }
};

Chocolate Distribution Problem
Difficulty: EasyAccuracy: 49.91%Submissions: 266K+Points: 2Average Time: 15m
Given an array arr[] of positive integers, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets among m students such that -
      i. Each student gets exactly one packet.
     ii. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum and return that minimum possible difference.