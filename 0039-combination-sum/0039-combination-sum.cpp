class Solution {
public:
void func( set<vector<int>>&set,  vector<int>nums,  vector<int>temp, int target, int start, int end, int sum)
{
    if(sum==target)
    {
        set.insert(temp);
        return;
    }
    if(start>end || sum>target)
    return;

    func(set, nums, temp, target, start+1, end, sum);
    temp.push_back(nums[start]);
    func(set, nums, temp, target, start, end, sum+nums[start]);
    
}

 
    vector<vector<int>> combinationSum(vector<int>& nums, int target)
     {
        
       int n= nums.size();
       set<vector<int>>set;
       vector<vector<int>>ans;
       vector<int>temp;

       func(set, nums,temp,  target, 0, n-1, 0); 

       for(auto it: set)
       ans.push_back(it);

     return ans;
    }

};