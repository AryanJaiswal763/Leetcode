class Solution {
public:
  int function(vector<int>& nums, int n, int index, int count)
  {
        if(index==n)
        return count;

        return function(nums,n,index+1,count)+function(nums,n,index+1, count^nums[index]);
  }

    int subsetXORSum(vector<int>& nums) {
        
        int n=nums.size();
        int count=0;
        return function(nums, n, 0, count);
       
    }
};