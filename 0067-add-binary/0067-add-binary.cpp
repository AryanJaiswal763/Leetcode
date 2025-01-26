class Solution {
public:
    string addBinary(string a, string b) {
        
        int n1=a.length();
        int n2=b.length();
        string ans="";
        int carry=0;

        if(n2<n1)
        {
            reverse(b.begin(), b.end());
            while((n1-n2)!=0)
            {
               b=b+'0';
               n2++;
            }
            reverse(b.begin(), b.end());
        }

        if(n1<n2)
        {
            reverse(a.begin(), a.end());
            while((n2-n1)!=0)
            {
               a=a+'0';
               n1++;
            }
            reverse(a.begin(), a.end());
        }

        for(int i=n1-1;i>=0;i--)
        {
            if(a[i]=='0' && b[i]=='0')
             {
                if(carry==1)
                {
                ans=ans+'1';
                carry=0;
                }
                else
                {
                    ans=ans+'0';
                    carry=0;
                }
             }
           
           else if((a[i]=='0' && b[i]=='1') || (a[i]=='1' && b[i]=='0'))
             {
                if(carry==1)
                {
                ans=ans+'0';
                carry=1;
                }
                else
                {
                    ans=ans+'1';
                    carry=0;
                }
             }
             else
             {
                if(carry==1)
                {
                    ans=ans+'1';
                    carry=1;
                }
                else
                {
                    ans=ans+'0';
                    carry=1;
                }
             }

        }

        if(carry==1)
        ans=ans+'1';

        reverse(ans.begin(), ans.end());
        return ans;
    }
};