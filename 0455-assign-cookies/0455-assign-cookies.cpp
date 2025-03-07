class Solution {
public:
    int findContentChildren(vector<int>& a, vector<int>& b) {

      if(a.size()==0 || b.size()==0) 
      return 0;

      sort(a.begin(), a.end());
      sort(b.begin(), b.end());
      int n1=a.size();
      int n2=b.size();

       int i=n1-1;
       int j=n2-1;
       int count=0;

       while(j>=0 && i>=0)
       {
           if(b[j]>=a[i])
           {
              count++;
              j--;
              i--;
           }
           else
           {
            i--;
           }
       }

       return count;
    }
};