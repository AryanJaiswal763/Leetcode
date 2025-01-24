class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n=nums.size();
        vector<vector<int>>ans;
        set<vector<int>>set;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n-2;i++)
        {
            int low=i+1, high=n-1;
            while(low<high)
            {
                if(nums[low]+nums[high]==(-1*nums[i]))
                {
                set.insert({nums[i],nums[low],nums[high]});
                low++;
                high--;
                }
                else if(nums[low]+nums[high]<(-1*nums[i]))
                {
                    low++;
                }
                else
                {
                    high--;
                }
            }
        }

        for(auto it: set)
        {
            ans.push_back(it);
        }

        return ans;
    }
};