class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int n=nums.size();

        int maxcount1=1;
        int maxcount2=1;
        int count1=1;
        int count2=1;

        for(int i=0;i<n-1;i++)
        {
           if(nums[i+1]>nums[i])
           {
            count1++;
            maxcount1=max(maxcount1, count1);
           }
           else
           count1=1;
        }

         for(int i=n-1;i>=1;i--)
        {
           if(nums[i-1]>nums[i])
           {
            count2++;
            maxcount2=max(maxcount2, count2);
           }
           else
           count2=1;
        }

        return max(maxcount1, maxcount2);
    }
};