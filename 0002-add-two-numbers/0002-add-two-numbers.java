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
        

        int num=head1.val+head2.val;
        ListNode head3=new ListNode(num%10);
        ListNode temp=head3;
        int carry=num/10;
        
        head1=head1.next;
        head2=head2.next;

        while(head1!=null && head2!=null){
            int nums=head1.val+head2.val;
            ListNode temp2=new ListNode( (nums+carry)%10 );
            carry=(nums+carry)/10;
            temp.next=temp2;
            temp=temp2;
            head1=head1.next;
            head2=head2.next;
        }

        while(head1!=null){
             ListNode temp3=new ListNode( (head1.val+carry)%10 );
             carry=(head1.val+carry)/10;
             temp.next=temp3;
             temp=temp3;
             head1=head1.next;
        }

        while(head2!=null){
            ListNode temp4=new ListNode( (head2.val+carry)%10 );
             carry=(head2.val+carry)/10;
             temp.next=temp4;
             temp=temp4;
             head2=head2.next;
        }

        if(carry==1){
               ListNode temp5=new ListNode(1);
               temp.next=temp5;
        }

        return head3;
    }
}