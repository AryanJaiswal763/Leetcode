class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      
      int count=1;
      vector<int>arr;
      arr.push_back(nums[0]);

      for(int i=1;i<nums.size();i++)
      {
        if(count<2 && nums[i-1]==nums[i])
        {
        arr.push_back(nums[i]);
        count++;
        }
        if(nums[i-1]!=nums[i])
        {
            arr.push_back(nums[i]);
            count=1;
        }
      }

      for(int i=0;i<arr.size();i++)
      {
        nums[i]=arr[i];
      }

      return arr.size();
    }
};