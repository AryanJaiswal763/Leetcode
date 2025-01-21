class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        
        int n=nums.size();
        int c=0;
        int ind;
         vector<int>ans(n+1,0);

        if(nums[n-1]!=9)
        {
        nums[n-1]++;
        return nums;
        }

       
            for(int i=0;i<n;i++)
            {
                if(nums[i]==9)
                c++;
            }

            if(c==n)
            {
            ans[0]=1;
            return ans;
            }
            
            
                for(int i=n-1;i>=0;i--)
               {
                if(nums[i]!=9)
                {
                    ind=i;
                    break;
                }
               
                } 

                for(int i=ind; i<n;i++)
                {
                   if(i==ind)
                   nums[i]++;
                   else
                   nums[i]=0;
                }  
            
            

        
        return nums;
    }
};