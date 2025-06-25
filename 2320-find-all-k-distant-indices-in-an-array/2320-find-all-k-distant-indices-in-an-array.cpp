class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
       int n=nums.size();

       vector<int>arr;
       for(int i=0;i<n;i++)
       {
        if(nums[i]==key)
        arr.push_back(i);
       }
       
       set<int>s;
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<arr.size();j++){
            if(abs(i-arr[j])<=k)
            s.insert(i);
        }
       }
        vector<int>a;
           for (int x : s) {
               a.push_back(x);
            }

        return a;
    }
};