class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node* slow=head;
        Node* fast=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        int ans=slow->data;
        return ans;
    }
};
//basicaly it will works like that if fast goes at the end then the slow is at the middle