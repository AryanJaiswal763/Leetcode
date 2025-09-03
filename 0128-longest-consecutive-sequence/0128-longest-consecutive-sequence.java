class Solution {
    public int longestConsecutive(int[] nums) {
        
// 1 2 3 4 100 200
// 0 1 1 2
        // O{nlongn} time complexity

        Arrays.sort(nums);
        int  maxlen=1, len=1;
        for(int i=1;i<nums.length;i++){
            
            if(nums[i]==nums[i-1])
            continue;

            else if(nums[i-1]+1==nums[i]){
               len++;
               maxlen=Math.max(maxlen,len);
            }
            else{
                len=1;
            }
        }

         if(nums.length==0)
         return 0;
         
        return maxlen;

    }
}