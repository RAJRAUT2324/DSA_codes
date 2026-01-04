class Solution {
public:
    pair<int, int> sumPositiveNegative(const vector<int>& arr) {
        // Implement logic to calculate sums of positive and negative elements
        int size=arr.size();
        int sump=0;
        int sums=0;
        for(int i=0;i<size;i++)
        {
            if(arr[i]>0)
            {
              sump=sump+arr[i];
            }
            else
            {
                sums=sums+arr[i];
            }
        }
         return std::make_pair(sump, sums);
    }
};
//Input: [-1, 2, 3, -4, 5]

//Output: (10, -5)