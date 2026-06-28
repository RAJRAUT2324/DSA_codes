/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newlink=new ListNode(-1);
        ListNode* tail=newlink;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry)
        {
            int a=l1?l1->val:0;
            int b=l2?l2->val:0;

            int sum=a+b+carry;
            int digit=sum%10;
            carry=sum/10;

            ListNode* newnode=new ListNode(digit);
            tail->next=newnode;
            tail=newnode;
           if(l1!=NULL)
            l1=l1->next;
            if(l2!=NULL)
            l2=l2->next;

        }
        // if(carry!=0)
        // {
        //     ListNode* newnode=new ListNode(carry);   // this can be handeled using the direct or condition in the above while loop
        //     tail->next=newnode;
        //     tail=newnode;
        // }
        tail->next=NULL;
        return newlink->next;
    }
};

// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

// Example 1:


// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.
// Example 2:

// Input: l1 = [0], l2 = [0]
// Output: [0]
// Example 3:

// Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
// Output: [8,9,9,9,0,0,0,1]
class Solution {
  public:

    Node* reverse(Node* head)
    {
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;

        while(curr != NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }

        return prev;
    }

    Node* addTwoLists(Node* head1, Node* head2) {

        Node* reversed1 = reverse(head1);
        Node* reversed2 = reverse(head2);

        Node* temp1 = reversed1;
        Node* temp2 = reversed2;
        Node* prev1 = NULL;

        int carry = 0;

        while(temp1 != NULL || temp2 != NULL)
        {
            int val1 = (temp1 != NULL) ? temp1->data : 0;
            int val2 = (temp2 != NULL) ? temp2->data : 0;

            int sum = val1 + val2 + carry;

            carry = sum / 10;
            int digit = sum % 10;

            if(temp1 != NULL)
            {
                temp1->data = digit;
                prev1 = temp1;
                temp1 = temp1->next;
            }
            else
            {
                Node* newnode = new Node(digit);
                prev1->next = newnode;
                prev1 = newnode;
            }

            if(temp2 != NULL)
                temp2 = temp2->next;
        }

        if(carry > 0)
        {
            Node* newnode = new Node(carry);
            prev1->next = newnode;
        }

        Node* result = reverse(reversed1);

        // Remove leading zeros
        while(result != NULL && result->data == 0 && result->next != NULL)
        {
            result = result->next;
        }

        return result;
    }
};