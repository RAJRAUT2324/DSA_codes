class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid2(stack<int>& s,int count,int totalSize)
    {
        //base case
        if(count==totalSize)
        {
            s.pop();
            return;
        }
        //1 case hum solve karenge
        int val=s.top();
        s.pop();
        count++;
        deleteMid2(s,count,totalSize);
        s.push(val);
    }
    void deleteMid(stack<int>& s) {
       deleteMid2( s,0,s.size()/2);
    }
};
Input: s = [10, 20, 30, 40, 50]
Output: [50, 40, 20, 10]
Explanation: The bottom-most element will be 10 and the top-most element will be 50. Middle element will be element at index 3 from bottom, which is 30. Deleting 30, stack will look like {10 20 40 50}.