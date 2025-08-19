class Solution {
    public int missingNumber(int[] nums) {
     
      // optimal with O(n);
      int sum=0;
      for(Integer num:nums)
      sum=sum+num;
      
      int n=nums.length;
      int total=n*(n+1)/2;

      return total-sum;


     // By sorting- Complexity-O(nlogn)
        // Arrays.sort(nums);
        // for(int i=0; i<nums.length; i++){
        //     if(nums[i]!=i)
        //     return i;
        // }

        // return nums.length;
    }
}
// 0 1 3