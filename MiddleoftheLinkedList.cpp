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
        int len=0;
        ListNode* temp=head;
        ListNode* ans=nullptr;
        int middle=0;
        while(temp)
        {
            len++;
            temp=temp->next;
        }
        
        temp=head;
        if(len%2==1)
            middle=(len+1)/2;
        else{
            middle=(len/2)+1;
        }
        
        for(int i=1 ; i<middle;i++)
        {
            temp=temp->next;
        }
        
        return temp;
        
            
        
    }
};