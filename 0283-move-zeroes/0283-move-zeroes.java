class Solution {
    public static void swap(int[] nums, int i, int j){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
  // 0 1 0 3 12
  // 1 0 0 3 12  i++ j++
  // 1 3 0 0 12
  // 1 3 12 0 0
    public void moveZeroes(int[] nums) {
         
         int i=0, j=1;
         while(j<nums.length){
            if(nums[i]==0 && nums[j]!=0){
            swap(nums,i,j);
            i++;
            j++;
            }
            else if(nums[i]==0 && nums[j]==0)
            {
              j++;
            }
            else if(nums[i]!=0 && nums[j]==0)
            {
                i++;
                j++;
            }
            else{
                i=i+2;
                j=i+1;
            }

        }

    }
}