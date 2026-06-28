/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        vector<int>arr;
        vector<int>brr;
        while(head!=NULL)
        {
            arr.push_back(head->data);
            head=head->next;
        }
        brr=arr;
        reverse(arr.begin(),arr.end());
        return arr==brr;
    }
};