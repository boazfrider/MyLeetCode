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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        
        ListNode* temp1=list1->next;
        ListNode* temp2=list2->next;
        
        if(list1->val <= list2->val)
        {
            list1->next=NULL;
            list1->next=mergeTwoLists(temp1,list2);
            return list1;
        }
        else{
            list2->next=NULL;
            list2->next=mergeTwoLists(list1,temp2);
            return list2;
        }
        
    }
};