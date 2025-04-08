class Solution {
public:
 int function(int index, int n, int operations, vector<int>&nums)
 {
     if(index>=n)
     return operations;

     unordered_map<int,int>map;

       for(int i=index;i<n;i++)
        {
            map[nums[i]]++;
        }


     for(auto it=map.begin(); it!=map.end(); it++)
     {
        if(it->second>1)
        return function(index+3, n, operations+1, nums);
     }

    return operations;
 }
    int minimumOperations(vector<int>& nums) {
        
        int n=nums.size();
        int operations=0;

       
 
        return function(0, n, operations, nums);
    }
};