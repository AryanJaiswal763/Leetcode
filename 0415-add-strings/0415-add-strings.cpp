class Solution {
public:
    string addStrings(string num1, string num2) {
        
        int n1=num1.length();
        int n2=num2.length();

        if(n1>n2)
        {
            reverse(num2.begin(), num2.end());
            while((n1-n2)!=0)
            {
                num2=num2+'0';
                n2++;
            }
            reverse(num2.begin(), num2.end());
        }
        if(n2>n1)
        {
            reverse(num1.begin(), num1.end());
            while((n2-n1)!=0)
            {
                num1=num1+'0';
                n1++;
            }
            reverse(num1.begin(), num1.end());
        }

         int carry=0;
         string ans="";

        for(int i=n1-1;i>=0;i--)
        {
           
            int a=num1[i]-'0';
            int b=num2[i]-'0';
            int sum=a+b;

            if(sum<=9)
            {
                if(sum+carry<=9)
                {
                    ans=ans+to_string(sum+carry);
                    carry=0;
                }
               else
               {
                  ans=ans+to_string((sum+carry)%10);
                  carry=(sum+carry)/10;
               }
            }

           
        else
        {
            if(carry==0)
            {
                ans=ans+to_string(sum%10);
                carry=sum/10;
            }
            else
            {
                ans=ans+to_string((carry+sum)%10);
                carry=(sum+carry)/10;
            }
        }
        }

         if(carry!=0)
         ans=ans+to_string(carry);
         
         reverse(ans.begin(), ans.end());
         return ans;
    }
};