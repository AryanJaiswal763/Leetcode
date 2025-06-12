class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int ans=0;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            ans=max(ans, abs(nums[i]-nums[i+1]));
        }

        ans=max(ans, abs(nums[nums.size()-1]-nums[0]));

        return ans;
    }
};