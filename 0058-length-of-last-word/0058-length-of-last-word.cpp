class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n=s.length();
        int ind=n-1;
        int ans=0;
        bool isSpace=true;
        while(isSpace)
        {
            if(s[ind]==' ')
            ind--;
            else
            isSpace=false;
        }

        while(!isSpace && ind>=0 )
        {
            if(s[ind]!=' ')
            {
            ind--;
            ans++;
            }
            else
            isSpace=true;
        }

        return ans;
    }
};