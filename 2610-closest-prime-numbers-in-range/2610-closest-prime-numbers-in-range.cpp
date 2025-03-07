class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        
        vector<bool>arr(right+1, true);
        arr[0]=arr[1]=false;

        for(int i=2;i*i<=right;i++)
        {
            if(arr[i])
            {
               for(int j=i*i;j<=right;j=j+i)
               {
                arr[j]=false;
               }
            }
        }

        int prev=-1;
        vector<int>ans(2,-1);
         int sub=INT_MAX;
        

        while(left<=right)
        {
            if(arr[left])
            {
                if(prev==-1)
                prev=left;
                else
                {
                   if(left-prev < sub)
                   {
                    ans[0]=prev;
                    ans[1]=left;
        
                    sub=left-prev;
                   }
                }

                prev=left;
            }

        
         left++;
        }
        
        
        return ans;
    }
};