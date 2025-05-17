class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        vector<int>freq(3,0);
        for(int i=0;i<nums.size();i++)
        {
           freq[nums[i]]++;
        }
        int i=0;
       while(freq[0]--)
       {
        nums[i]=0;
        i++;
       }

       while(freq[1]--)
       {
        nums[i]=1;
        i++;
       }

       while(freq[2]--)
       {
        nums[i]=2;
        i++;
       }

    }
};