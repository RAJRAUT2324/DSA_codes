class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
       queue<int> neww;
       int n=q.size();
       int i=0;
       while(i!=n/2)
       {
           neww.push(q.front());
           q.pop();
           i++;
       }
     while(!neww.empty() && !q.empty())
     {
         q.push(neww.front());
         neww.pop();
         q.push(q.front());
         q.pop();
     }
    }
};
// Input: q[] = [2, 4, 3, 1]
// Output: [2, 3, 4, 1]
// Explanation: We place the first element of the first half 2 and after that 
// place the first element of second half 3 and after that repeat
// the same process one more time so the resulting queue will be [2, 3, 4, 1]