class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        
        int maxLen=0;
        int n=arr.size();

        for(int i=0;i<n-2;i++)
        {
            for(int k=i+1;k<n-1;k++)
            {
            int prev2=arr[i], prev1=arr[k],count=2;
            for(int j=k+1;j<n;j++)
            {
                
                if(arr[j]==prev1+prev2)
                {
                count++;
                maxLen=max(maxLen,count);
                prev2=prev1;
                prev1=arr[j];
                }
            }
            }
        }

        if(maxLen==2)
        return 0;

        return maxLen;
    }
};