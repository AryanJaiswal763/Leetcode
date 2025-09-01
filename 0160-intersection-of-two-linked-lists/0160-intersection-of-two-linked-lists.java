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
    public ListNode getIntersectionNode(ListNode head, ListNode head1) {
        
        HashSet<ListNode>set=new HashSet<>();
        while(head!=null){
            set.add(head);
            head=head.next;
        }

        while(head1!=null){
            if(set.contains(head1))
            return head1;

            set.add(head1);
            head1=head1.next;
        }

        return null;
    }
}