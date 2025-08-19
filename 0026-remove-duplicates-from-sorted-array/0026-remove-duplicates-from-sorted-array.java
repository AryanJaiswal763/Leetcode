class Solution {
    public int removeDuplicates(int[] nums) {
        
        Set<Integer>set=new LinkedHashSet<>();
         for(int i=0; i<nums.length;i++){
            set.add(nums[i]);
         }
         
         int i=0;
         for(Integer x: set){
            nums[i]=x;
            i++;
         }

         return set.size();
    }
}