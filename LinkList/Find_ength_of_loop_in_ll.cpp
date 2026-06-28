/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }Find length of Loop

};
*/

class Solution {
  public:
  
  int cycleStart(Node* head) {
      unordered_map<Node*,bool>mp;
      int count=0;
      if(head==NULL) return -1;
      while(head!=NULL)
      {
          if(mp[head]==true)
          {
              count++;
              mp[head]=false;
          }
          else if(count>0 && mp[head]==false)
          {
              return count;
          }
          else
          {
            mp[head]=true;  
          }
          
          head=head->next;
      }
        return -1;
    }
    
    int lengthOfLoop(Node *head) {
        // code here
        int ans=cycleStart(head);
        return ans==-1 ? 0 : ans;
    }
};