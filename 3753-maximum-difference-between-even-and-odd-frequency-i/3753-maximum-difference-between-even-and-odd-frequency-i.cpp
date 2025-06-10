class Solution {
public:
    int maxDifference(string s) {
        
        vector<int>arr(26,0);

        for(int i=0;i<s.length();i++)
        {
            arr[s[i]-'a']++;
        }
        
        int a1=INT_MIN, a2=INT_MAX;

        for(int i=0;i<26;i++)
        {
            if(arr[i]!=0)
            {
           if(arr[i]%2==1)
           {
              a1=max(a1,arr[i]);
           }
           else
           {
              a2=min(a2, arr[i]);
           }
            }
        }

        return a1-a2;
    }
};