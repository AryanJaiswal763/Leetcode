class Solution {
   public void rotate(int[] nums, int k) {
        k=k%nums.length;
        int ind=nums.length-k;
        Deque<Integer>dq=new ArrayDeque<>();
        for(int i=ind; i<nums.length;i++){
            dq.addLast(nums[i]);
        }
        for(int i=0;i<ind;i++){
            dq.addLast(nums[i]);
        }
        int i=0;
        for(Integer x:dq){
            nums[i]=x;
            i++;
        }

        
    }
}