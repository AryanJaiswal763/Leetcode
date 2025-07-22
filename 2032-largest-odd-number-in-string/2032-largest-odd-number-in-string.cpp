class Solution {
public:
    string largestOddNumber(string s) {
        int ind=-1,len=s.length();
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9'){
                ind=i;
                break;
            }
            len--;
        }
        if(ind==-1)
        return "";
          
        return s.substr(0,len);
    }
};