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
        
        ListNode* temp=head;
        int size=0;
        while(temp)
        {
            size++;
            temp=temp->next;
        }
        if(size==1)
            return NULL;
        temp=head;
        ListNode* del;
        for(int i=0 ; i < (size/2)-1 ; i++)
        {
            temp=temp->next;
        }
        del=temp->next;
        temp->next=del->next;
        delete del;
        return head;
        
    }
};