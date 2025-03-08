class Solution {
public:
    int minimumRecolors(string s, int k) {
        
        int n=s.length();
        int minCount=INT_MAX;

        for(int i=0;i<n-k+1;i++)
        {
           int x=1, j=i, count=0; 

           while(x<=k)
           {
              if(s[j]=='W')
              {
              count++;
              }

              j++;
              x++;
           }

           minCount=min(count, minCount);
        }

        return minCount;
    }
};