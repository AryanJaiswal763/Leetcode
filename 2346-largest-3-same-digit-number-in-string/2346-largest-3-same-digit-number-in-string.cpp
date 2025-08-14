class Solution {
public:
    string largestGoodInteger(string s) {
        int i=0, j=1, k=2;
        int ans=0;
        string s1="";
        while(k<s.length()){
            if(s[i]==s[j] && s[j]==s[k]){
                string str="";
                str=str+s[i]+s[j]+s[k];
                ans=max(ans, stoi(str));
                if(str=="000")
                s1=str;
            }

            i++;
            j++;
            k++;
        }
       if(ans==0 && s1=="000")
       return s1;

        if(ans==0)
        return "";
       
       

       return to_string(ans);
    }
};