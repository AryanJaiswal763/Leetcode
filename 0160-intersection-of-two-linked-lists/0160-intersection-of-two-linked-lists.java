/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode head1, ListNode head2) {
         
        // O(1) space complexity
        ListNode temp1=head1;
        ListNode temp2=head2;

        while(temp1!=temp2){
            temp1=(temp1==null)?head2:temp1.next;
            temp2=(temp2==null)?head1:temp2.next;
        }

        return temp1;



        //O(n) space solution

        // HashSet<ListNode>set=new HashSet<>();
        // while(head!=null){
        //     set.add(head);
        //     head=head.next;
        // }

        // while(head1!=null){
        //     if(set.contains(head1))
        //     return head1;

        //     set.add(head1);
        //     head1=head1.next;
        // }

        // return null;
    }
}