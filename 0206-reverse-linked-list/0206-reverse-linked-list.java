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
    public ListNode reverseList(ListNode head) {
        Stack<Integer>stack=new Stack<>();
        ListNode temp=head;
        if(temp==null || temp.next==null)
        return temp;

        while(temp!=null){
            stack.push(temp.val);
            temp=temp.next;
        }

        ListNode head2=new ListNode(stack.pop());
        ListNode temp2=head2;
        while(!stack.isEmpty()){
            ListNode temp3=new ListNode(stack.pop());
            temp2.next=temp3;
            temp2=temp3;
        }

        return head2;
    }
}