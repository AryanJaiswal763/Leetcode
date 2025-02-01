class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n=nums.size();

       int c1=0, c2=1;
       while(c2<n)
      {
         if(nums[c1]%2==0 && nums[c2]%2==0)
         return false;
         else if(nums[c1]%2!=0 && nums[c2]%2!=0)
         return false;
         else
         {
         c1++;
         c2++;
         }
      }
      return true;
    }
};