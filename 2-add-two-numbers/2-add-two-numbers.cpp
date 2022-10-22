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
        ListNode* l3 = new ListNode(), *l4 = l3;
        int temp = 0, count = 1;
        while(l1 != NULL && l2 != NULL)
        {
            int ans = l1->val + l2->val + temp;
            temp = (ans / 10);
            ans%=10;
            l3->next = new ListNode(ans);
            l3 = l3->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1 != NULL)
        {
             int ans = l1->val + temp;
            temp = (ans / 10);
            ans%=10;
            l3->next = new ListNode(ans);
            l3 = l3->next;
            l1 = l1->next;
            // l2 = l2->next;
        }
        while(l2 != NULL)
        {
             int ans = l2->val + temp;
            temp = (ans / 10);
            ans%=10;
            l3->next = new ListNode(ans);
            l3 = l3->next;
            // l1 = l1->next;
            l2 = l2->next;
        }
        if(temp != 0)
        l3->next = new ListNode(temp);
            
        // delete l3;
        return l4->next;
        
    }
};