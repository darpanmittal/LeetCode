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
    void deleteNode(ListNode* node) {
        *node=*(node->next);
        
     
    }
};



//ListNode *temp=node->next;
        //while(temp!=NULL)
      //  {
      //      node->val=temp->val;
         //   if(temp->next!=NULL)
          //  node=node->next;
         //   temp=temp->next;
       // }
    //    node->next=NULL;
