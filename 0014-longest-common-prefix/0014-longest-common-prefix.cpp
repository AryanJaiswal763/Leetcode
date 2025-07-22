class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==1)
        return strs[0];

        string s1=strs[0];
        string s2=strs[1];
        string help="";

        for(int i=0;i<min(s1.length(),s2.length());i++)
        {
            if(s1[i]==s2[i])
            help=help+s1[i];
            else
            break;
        }
        if(help=="" || strs.size()==2)
        return help;
        
        int i=2;
        while(i<strs.size())
        {
            if(help!=strs[i].substr(0,help.length()))
            {
                while(help!=strs[i].substr(0,help.length())){
                if(help.length()==0)
                return "";
                help.pop_back();
                }
            }

            i++;
        }

        return help;
    }
};