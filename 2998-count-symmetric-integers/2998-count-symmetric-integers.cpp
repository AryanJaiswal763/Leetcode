class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        
        int count=0;
        while(low<=high)
        {
            string s=to_string(low);
            if(s.length()%2==0)
            {
                int c1=0;
                for(int i=0;i<s.length()/2;i++)
                {
                    c1=c1+(s[i]-'0');
                }

                int c2=0;
                for(int i=s.length()/2;i<s.length();i++)
                {
                    c2=c2+(s[i]-'0');
                }

                if(c1==c2)
                count++;
            }

            low++;
        }

        return count;
    }
};