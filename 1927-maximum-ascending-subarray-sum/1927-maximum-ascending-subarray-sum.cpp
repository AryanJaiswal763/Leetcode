class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0], maxSum=nums[0];

        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]>nums[i])
            {
                sum=sum+nums[i+1];
                maxSum=max(maxSum, sum);
            }
            else
            sum=nums[i+1];
        }

        return maxSum;
    }
};