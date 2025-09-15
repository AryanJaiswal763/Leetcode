class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        
        Set<List<Integer>>result=new HashSet<>();
        if(nums.length<3)
        return new ArrayList<>(result);

        Arrays.sort(nums);
        for(int i=0;i<nums.length-2;i++){

            int sum=-1*nums[i], left=i+1, right=nums.length-1;
            while(left<right){
                int target=nums[left]+nums[right];
                if(sum==target){
                    result.add(Arrays.asList(nums[i],nums[left],nums[right]));
                    left++;
                    right--;
                }
                else if(sum<target){
                    right--;
                }
                else
                left++;
            }
        }

        return new ArrayList<>(result);
    }
}