/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode head1, ListNode head2) {
        
        ListNode result=new ListNode(0);
        ListNode ptr=result;
        
        int carry=0;

        while(head1!=null || head2!=null)
        {
            int sum=carry;
            if(head1!=null)
            {
                sum=sum+head1.val;
                head1=head1.next;
              
            }
            if(head2!=null)
            {
                sum=sum+head2.val;
                head2=head2.next;
            }

            carry=sum/10;
            sum=sum%10;
            ptr.next=new ListNode(sum);
            ptr=ptr.next;

        }
        if(carry==1)
        {
            ptr.next=new ListNode(1);
            ptr=ptr.next;
        }

        return result.next;
       
    }
}