/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       unordered_map<ListNode*, bool> visited;

       ListNode* temp = head;

        while(temp != NULL) {
            if(visited[temp] == true) {
                return temp;
            }
            else {
                visited[temp] = true;
                temp = temp ->next;
            }
        }
        //agar main yaha tak aagya
        //iska mtlb
        //temp == NULL hua hoga
        //no loop 
        return NULL;



       
    }
};