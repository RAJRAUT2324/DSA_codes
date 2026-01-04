class Solution {
  public:
 void reverseQueue(queue<int> &q) {
    stack<int> s;

    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}
};

// };Input: q[] = [5, 10, 15, 20, 25]
// Output: [25, 20, 15, 10, 5]
// Explanation: After reversing the given elements of the queue, the resultant queue will be 25 20 15 10 5.

//using reccurtion
class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        if(q.empty())
      {
          return;
      }
      int a=q.front();
      q.pop();
      reverseQueue(q);
      q.push(a);
    }
};