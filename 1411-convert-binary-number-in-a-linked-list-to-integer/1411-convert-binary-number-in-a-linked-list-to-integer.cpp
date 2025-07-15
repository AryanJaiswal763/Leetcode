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
        
        ListNode *temp=head;
        int size=0;
        while(temp!=NULL)
        {
            size++;
            temp=temp->next;
        }

        ListNode *temp1=head;
        int ans=0;
        while(temp1!=NULL)
        {
            if(temp1->val==1)
            ans=ans+pow(2,size-1);

            size--;
            temp1=temp1->next;
        }

        return ans;
    }
};