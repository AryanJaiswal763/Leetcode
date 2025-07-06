class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        
        unordered_map<int,int>map;
 

        for(int i=0;i<n;i++)
        { 
           int num=nums[i];
           if(map.find(target-num)!=map.end())
           return {i,map[target-num]};
           else
           map[nums[i]]=i;
        }

      return {};
    }
};