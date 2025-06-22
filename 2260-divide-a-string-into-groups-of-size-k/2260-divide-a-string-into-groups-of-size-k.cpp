class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int len=s.length();
        int var=len%k;

        vector<string>ans;
        for(int i=0;i<len-var;i+=k)
        {
            string str="";
            int j=i;
            int count=0;
            while(count<k)
            {
                str=str+s[j];
                count++;
                j++;
            }

            ans.push_back(str);
        }
        
        if(var==0)
        return ans;

        int m=len-var;
        string str="";
        for(int i=m;i<len;i++)
        {
            str=str+s[i];
        }

        int n=str.length();
        while(n<k)
        {
            str=str+fill;
            n++;
        }
        ans.push_back(str);
        return ans;
    }
};