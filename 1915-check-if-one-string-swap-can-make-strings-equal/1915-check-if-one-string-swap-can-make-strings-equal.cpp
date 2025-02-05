class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
        int n1=s1.length();
        int n2=s2.length();

        if(n1!=n2)
        return false;

        //int misplace=0;
        stack<int>st;
        for(int i=0;i<n1;i++)
        {
           if(s1[i]!=s2[i])
           {
           st.push(i);
           }
           if(st.size()==3)
           return false;

        }

        if(st.empty())
        return true;
        if(st.size()==1)
        return false;
        if(st.size()==2)
        {
            int a=st.top();
            st.pop();
            int b=st.top();
            
            if(s1[a]!=s2[b] || s2[a]!=s1[b])
            return false;
        }

        return true;
    }
};