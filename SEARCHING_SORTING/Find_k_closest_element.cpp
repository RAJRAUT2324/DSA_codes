class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector<int>ans;
        sort(arr.begin(),arr.end());
        int low=0;
        int high=n-1;
        while(high-low>=k)
        {
            if(abs(arr[low]-x)>abs(arr[high]-x))
            {
                low++;
            }
            else
            {
                high--;
            }
        }
     for(int i=low;i<=high;i++)
     {
        ans.push_back(arr[i]);
     }
     return ans;
    }
};

// Find K Closest Elements
// Given a sorted list of integers arr, along with two integers k and x, your task is to find the k elements in the array that are closest to the given integer x.

// Important Details:
// Closeness between two numbers is determined first by their absolute distance from x. If two elements have the same distance from x, the smaller element is considered closer.
// The result list should contain exactly k elements and should be sorted in ascending order.
// Example:
// Input:

// arr = [1, 2, 3, 4, 5]
// k = 4
// x = 3
// Output:

// [1, 2, 3, 4]