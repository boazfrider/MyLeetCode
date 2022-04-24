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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=new ListNode(0);
        temp->next=head;
        ListNode* current=temp;
        while(current->next!=nullptr && current->next->next!=nullptr)
        {
            ListNode* first=current->next;
            ListNode* second=current->next->next;
            first->next=second->next;
            second->next=first;
            current->next=second;
            current=first;
        }
        return temp->next;
        
    }
};