class Solution {
public:
    int findFirstRepeatingElement(vector<int>& arr)
    {
        int n=arr.size();
        int value=-1;
        unordered_map<int,int>hash;
        for(int i=0;i<n;i++)
        {
            hash[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(hash[arr[i]]>1)
            {
                return arr[i];
            }
        }
        return -1;
       
    }
};


// 490. Find First Repeating Element




// Easy
// 0
// You are given an array of integers. Your task is to find the first repeating element in this array. A repeating element is one that appears at least twice in the array, and the first one is the one with the least index of its first occurrence.

// Write a function int findFirstRepeatingElement(vector<int> &arr) that takes a vector of integers as its parameter and returns the first integer that repeats. If no such element exists, return -1.

// Example 1:
// Input: arr = [10, 5, 3, 4, 3, 5, 6] Output: 5 Explanation: 5 is the first element that repeats.