class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>>ans;
        int ind=0;

       while(ind<intervals.size() && intervals[ind][1]<newInterval[0])
       {
        ans.push_back(intervals[ind]);
        ind++;
       }
 
        if(ind==intervals.size())
        {
            ans.push_back(newInterval);
            return ans;

        }

        
        while(ind<intervals.size() && newInterval[1]>=intervals[ind][0])
        {
           newInterval[0]=min(intervals[ind][0], newInterval[0]);
           newInterval[1]=max(intervals[ind][1], newInterval[1]);
           ind++;
        }

        ans.push_back(newInterval);

        while(ind<intervals.size())
        {
            ans.push_back(intervals[ind]);
            ind++;
        }

        return ans;
    }
};