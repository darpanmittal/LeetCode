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
    ListNode* middleNode(ListNode* head) {
        // ListNode* temp = head;
        // ListNode* node = head;
        // int count = 0;
        // while(temp!=NULL)
        // {
        //     count++;
        //     temp = temp->next;
        // }
        // if(count%2!=0)
        // {
        //     int n = count/2;
        //     for(int i=0;i<count;i++)
        //     {
        //         node = node->next;
        //     }
        // }
        // return node;
        ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};