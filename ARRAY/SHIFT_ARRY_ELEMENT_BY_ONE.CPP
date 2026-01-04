class Solution {
public:
    vector<int> shiftRight(const vector<int>& arr) {
        // Implement logic to shift array elements by one position
        vector<int>Array=arr;
        int size=arr.size();
        int last=Array[size-1];
        for(int i=size-1;i>=0;i--)
        {  if(i!=0)
        {
            Array[i]=Array[i-1];
        }
        else
        {
            Array[0]=last;
        }
        }
        
        return Array;
    }
};//Input: [5, 10, 15, 20]
//Output: [20, 5, 10, 15]