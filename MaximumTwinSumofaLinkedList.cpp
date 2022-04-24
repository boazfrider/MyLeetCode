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
    int pairSum(ListNode* head) {
        vector<int> arr;
        while(head!=NULL)
        {
            arr.push_back(head->val);
            head=head->next;
        }
        int max=0;
        for(int i = 0 ; i<=(arr.size()/2)-1;i++)
        {
            if(arr[i]+arr[arr.size()-1-i]>max)
                max=arr[i]+arr[arr.size()-1-i];
        }
        return max;
    }
};