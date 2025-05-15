class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
      
      queue<int>q;
      q.push(0);

      for(int i=1;i<groups.size();i++)
      {
        if(groups[q.back()]!=groups[i])
        q.push(i);
      }

   vector<string>ans;
     while(!q.empty())
     {
        ans.push_back(words[q.front()]);
        q.pop();
     }

     return ans;
    }
};