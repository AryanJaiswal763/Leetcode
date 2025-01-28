class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        int n=nums.size();
        vector<string>ans;
        int ind=0;
  
       while(ind<n)
       {
            vector<int>a;
            a.push_back(nums[ind]);
            ind++;

                while(ind<n)
                {
                    // int c=0;
                    if(nums[ind]==nums[ind-1]+1)
                    {
                    a.push_back(nums[ind]);
                    ind++;
                    // c++;
                    }
                    else
                    break;
                }
            

           string s1=to_string(a[0]);
           string s2=to_string(a[a.size()-1]);
           string final=s1+"->"+s2;
           if(a.size()==1)
           ans.push_back(s1);
           else
           ans.push_back(final);

         
       }

       return ans;

    }
};