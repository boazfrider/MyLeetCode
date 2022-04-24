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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* current=list1;
        ListNode* temp=NULL;
        ListNode* helper;
        int k =a;
        do{
            current=current->next;
            a--;
            if(a==1)
                helper=current;
        }while(a>0);
        helper->next=list2;
        //cout<<helper->val;
        for(int i = k ; i<=b ; i++)
        {
           
            if(current->next!=NULL){
            temp=current->next;
            delete(current);
            current=temp;
            }

        }
        cout<<temp->val;
        while(list2->next!=NULL)
        {
            list2=list2->next;
        }
        list2->next=current;
        
        return list1;
        
    }
};