class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        unordered_map<int,int>map;

        for(int i=0;i<arr.size();i++)
        {
            map[arr[i]]++;
        }
 

        int ans=-1;
        for(auto it:map)
        {
            if(it.first==it.second)
            ans=max(ans,it.second);
        }

        return ans;
    }
};