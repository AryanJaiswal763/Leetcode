class Solution {
public:
    int countLargestGroup(int n) {
        
        unordered_map<int,int>map;

        for(int i=1; i<=n;i++)
        {
            int num=i;
            int sum=0;
            while(num>0)
            {
               sum=sum+(num%10);
               num=num/10;
            }

            map[sum]++;
        }

        int maxFreq=0;
        for(auto& it:map)
        {
           maxFreq= max(it.second, maxFreq);
        }
        
         int count=0;
        for(auto& it:map)
        {
            if(it.second==maxFreq)
            count++;
        }
         return count;
    }
};