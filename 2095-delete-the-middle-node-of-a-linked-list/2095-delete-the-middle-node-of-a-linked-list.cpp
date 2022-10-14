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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next == NULL)
        {
            return head->next;
        }
        ListNode *slow = head, *fast = head;
        ListNode *prev = head;
        while (fast && fast->next) {
            if(slow!=head)
            {
                prev = prev->next;
            }
            slow = slow->next;
            fast = fast->next->next;
            
        }
        // *slow = *(slow->next);
        prev->next = slow->next;
        
        return head;
    }
};