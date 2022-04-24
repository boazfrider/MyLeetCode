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
    int getDecimalValue(ListNode* head) {
        
        ListNode* temp = head;
        int size=0;
        while(temp)
        {
            size++;
            temp=temp->next;
            
        }
        temp=head;
        vector<int> arr(size);
        for(int i=0 ; i < size ; i++){
            arr[i]=temp->val;
            temp=temp->next;
        }
        int k=1;
        int res=0;
        for(int i=arr.size()-1 ; i>=0 ; i--)
        {
           // cout<<num << endl;
             res=res+arr[i]*k;
             k=k*2;
        }
        return res;
    }
};