class Solution {
    public int[] rearrangeArray(int[] nums) {
        
        int[] ans=new int[nums.length];
        int ind1=0, ind2=1;

        for(Integer num:nums){
            if(num>0){
                ans[ind1]=num;
                ind1=ind1+2;
            }
            else{
                ans[ind2]=num;
                ind2=ind2+2;
            }
        }

        return ans;
    }
}