#include <unordered_map>
#include <vector>
#include <queue>

class Solution {
public:
    int kthMostFrequent(const std::vector<int>& arr, int k) {
        // Count frequencies of elements
        std::unordered_map<int, int> freq;
        for (int num : arr) {
            freq[num]++;
        }

        // Check if k is valid
        if (freq.size() < k) {
            return -1;
        }

        // Min-Heap to track k most frequent elements
        auto cmp = [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
            return a.second > b.second; // Min-heap based on frequency
        };
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, decltype(cmp)> minHeap(cmp);

        // Keep the top k elements
        for (const auto& [num, count] : freq) {
            minHeap.push({num, count});
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        // The root of the heap is the kth most frequent element
        return minHeap.top().first;
    }
};
// Find the kth Most Frequent Element
// You need to find the kth most frequently occurring element in a given array of integers. The frequency of an element is defined by the number of times it appears in the array. If multiple elements have the same frequency, the element with the smaller numerical value is considered more frequent.

// In case there are fewer than k unique elements in the array, return -1.

// Example
// Example 1:
// Input: array = [1, 1, 1, 2, 2, 3, 4], k = 2
// Output: 2
// The frequencies are:

// 1 occurs 3 times
// 2 occurs 2 times
// 3 and 4 occur 1 time each
// The 2nd most frequent element is 2.