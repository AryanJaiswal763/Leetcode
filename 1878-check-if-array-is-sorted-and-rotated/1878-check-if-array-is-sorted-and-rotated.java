class Solution {
    public boolean check(int[] nums) {
        
        int ind=0;
        for(int i=0;i<nums.length-1;i++){
           if(nums[i+1]<nums[i])
           ind=i+1;
        }

        for(int i=ind; i<nums.length-1; i++){
            if(nums[i+1]<nums[i]){
                return false;
            }
        }
        
        if(ind!=0){
            if(nums[nums.length-1]>nums[0])
            return false;
        }

        for(int i=0;i<ind-1;i++){
            if(nums[i]>nums[i+1])
            return false;
        }

        return true;
    }
}