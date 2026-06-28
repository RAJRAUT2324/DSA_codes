class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return NULL;

        ListNode* temp=head;
        int count=0;

        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }

        int target=count/2;
        temp=head;

        for(int i=0;i<target-1;i++)
        {
            temp=temp->next;
        }

        temp->next=temp->next->next;

        return head;
    }
};Delete the Middle Node of a Linked List