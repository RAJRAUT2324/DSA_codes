class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head, int val) {
        
        // delete nodes from start
        while (*head != NULL && (*head)->data == val)
        {
            Node* temp = *head;
            *head = (*head)->next;
            
            if (*head != NULL)
                (*head)->prev = NULL;
                
            delete temp;
        }

        Node* temp = *head;

        while (temp != NULL)
        {
            if (temp->data == val)
            {
                Node* del = temp;

                if (temp->prev != NULL)
                    temp->prev->next = temp->next;

                if (temp->next != NULL)
                    temp->next->prev = temp->prev;

                temp = temp->next;
                delete del;
            }
            else
            {
                temp = temp->next;
            }
        }
    }
};