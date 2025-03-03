class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        int n=nums.size();
        vector<int>smallNum;
        vector<int>bigNum;
        vector<int>equalNum;

        for(int i=0;i<n;i++)
        {
            if(nums[i]<pivot)
            smallNum.push_back(nums[i]);
            else if(nums[i]>pivot)
            bigNum.push_back(nums[i]);
            else
            equalNum.push_back(nums[i]);
        }

        vector<int>ans;

        for(int i=0;i<smallNum.size();i++)
        {
            ans.push_back(smallNum[i]);
        }
        
        for(int i=0;i<equalNum.size();i++)
        {
            ans.push_back(equalNum[i]);
        }
        
        for(int i=0;i<bigNum.size();i++)
        {
            ans.push_back(bigNum[i]);
        }

        return ans;
    }
};