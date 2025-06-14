class Solution {
public:
    int minMaxDifference(int num) {
        
       string s=to_string(num);
       int n=s.length();

       char c='#';
       for(int i=0;i<n;i++)
       {
         if(s[i]!='9')
         {
         c=s[i];
         break;
         }
       }
       int maxNum;
       if(c=='#')
       maxNum=stoi(s);
       else
       {
         for(int i=0;i<n;i++)
         {
            if(s[i]==c)
            s[i]='9';
         }

         maxNum=stoi(s);
       }

       string s2=to_string(num);
       char ch='#';
       for(int i=0;i<n;i++)
       {
         if(s2[i]!='0')
         {
         ch=s2[i];
         break;
         }
       }
        int minNum;
       if(ch=='#')
       minNum=stoi(s2);
       else
       {
         for(int i=0;i<n;i++)
         {
            if(s2[i]==ch)
            s2[i]='0';
         }

         minNum=stoi(s2);
       }
   
         return maxNum-minNum;
    }
};