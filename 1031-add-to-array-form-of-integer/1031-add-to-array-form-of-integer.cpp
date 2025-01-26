class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
           vector<int>ans;
           vector<int>arr;
           while(k)
           {
              int x=k%10;
              arr.push_back(x);
              k=k/10;
           }
           reverse(arr.begin(), arr.end());

          int n1=num.size();
          int n2=arr.size();

          if(n1<n2)
          {
            reverse(num.begin(), num.end());
            while(n1!=n2)
            {
               num.push_back(0);
               n1++;
            }
            reverse(num.begin(), num.end());
          }
          if(n1>n2)
          {
            
            reverse(arr.begin(), arr.end());
            while(n1!=n2)
            {
               arr.push_back(0);
               n2++;
            }
            reverse(arr.begin(), arr.end());
          }
           int carry=0;


          for(int i=n1-1;i>=0;i--)
          {
            int sum=num[i]+arr[i];
        
            if(sum<=9)
            {
                if(sum+carry<=9)
                {
                    ans.push_back(sum+carry);
                    carry=0;
                }
                else
                {
                    ans.push_back((sum+carry)%10);
                    carry=(sum+carry)/10;
                }
            }
            else
            {
                if(carry==0)
                {
                    ans.push_back(sum%10);
                    carry=sum/10;
                }
                else
                {
                    ans.push_back((sum+carry)%10);
                    carry=(sum+carry)/10;
                }
            }

          }

          if(carry!=0)
          ans.push_back(carry);

          reverse(ans.begin(), ans.end());
          return ans;
    }
};