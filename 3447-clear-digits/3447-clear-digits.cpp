class Solution {
public:
    string clearDigits(string s) {
        int n=s.length();
        
        string st;
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]))
            {
                if(!st.empty())
                st.pop_back();
            }
            else
            st.push_back(s[i]);
        }
     return st;
        
    }
};