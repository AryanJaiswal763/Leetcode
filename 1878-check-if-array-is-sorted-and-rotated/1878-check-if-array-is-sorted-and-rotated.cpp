class Solution {
public:
    bool check(vector<int>& nums) {
        
        int n=nums.size();
        int index=0;
        bool isSorted=false;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]>=nums[i])
            isSorted=true;
            else
            {
            isSorted=false;
            break;
            }
        }
        if(isSorted)
        return true;

        for(int i=0;i<n-1;i++)
        {
              if(nums[i+1]<nums[i])

              {
              index=i+1;
              break;
              }
        }
       
       for(int i=index;i<n-1;i++)
       {
         if(nums[i+1]<nums[i])
         return false;
       }
       if(nums[n-1]>nums[0])
       return false;

       for(int i=0;i<index-2;i++)
       {
          if(nums[i+1]<nums[i])
          return false;
       }

       
       return true;
    }
};