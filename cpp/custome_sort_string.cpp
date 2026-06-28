string orderCopy;
class Solution {
public:
static bool cmp(char ch1,char ch2)
{
    return (orderCopy.find(ch1)<orderCopy.find(ch2));
}
    string customSortString(string order, string s) {
        orderCopy=order;
     sort(s.begin(),s.end(),cmp);
     return s;
    }
    
};
// Input: order = "cba", s = "abcd"

// Output: "cbad"

// Explanation: "a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a".

// Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.