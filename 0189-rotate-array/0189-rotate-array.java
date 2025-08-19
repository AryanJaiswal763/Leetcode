class Solution {
    public static void reverse(int[] nums, int start, int end){
        
        while(start<end){
          int temp=nums[start];
          nums[start]=nums[end];
          nums[end]=temp;
          start++;
          end--;
        }
    }

   public void rotate(int[] nums, int k) {
        k=k%nums.length;
        int ind=nums.length-k;

        reverse(nums,ind,nums.length-1);
        reverse(nums,0,ind-1);
        reverse(nums,0,nums.length-1);

       // with more time complexity O(n^2)
        // while(noOfTimes>0){
        //    int first=nums[0];
        //    for(int j=0;j<nums.length-1;j++){
        //       nums[j]=nums[j+1];
        //    }
        //    nums[nums.length-1]=first;
        //    noOfTimes--;
        // }




        // using extra space O(n)
        // Deque<Integer>dq=new ArrayDeque<>();
        // for(int i=ind; i<nums.length;i++){
        //     dq.addLast(nums[i]);
        // }
        // for(int i=0;i<ind;i++){
        //     dq.addLast(nums[i]);
        // }
        // int i=0;
        // for(Integer x:dq){
        //     nums[i]=x;
        //     i++;
        // }


    }
}