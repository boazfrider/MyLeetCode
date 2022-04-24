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
   
    ListNode* reverseList(ListNode* head) {
        ListNode* ans;
     //   ListNode* temp=head;
      //  ListNode* temp=head->next;
       if( head==NULL ||head->next==NULL)
       {
     //      std::cout<<head->val;
           return head;
       }
        else
           ans=reverseList(head->next);
     
        head->next=NULL;
        ListNode* temp=ans;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=head;
        
        return ans;
    }
};