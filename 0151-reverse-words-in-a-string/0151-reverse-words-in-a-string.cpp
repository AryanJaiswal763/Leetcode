class Solution {
public:
    string reverseWords(string s) {
         stack<string>st;
         int i=0;
        while(i<s.length()){

            string s1="";
            while(s[i]!=' '){
            s1=s1+s[i];
            i++;
            if(i==s.length())
            break;
            }
            st.push(s1);
            i++;
        }

        string str;
        while(!st.empty()){
            str=str+st.top();
            st.pop();
            str=str+" ";
        }
      
        string ans;
        i=0;
        while(i<str.length()){
            string newS="";
            while(str[i]!=' '){
                newS=newS+str[i];
                i++;
                if(i==str.length())
                break;
            }
            if(newS.length()!=0)
            ans=ans+newS+" ";

            i++;
        }

       ans.pop_back();
       return ans;
    }
};