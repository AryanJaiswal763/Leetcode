class Solution {
public:
bool func(string s, string t){
        unordered_map<char,char>map;
     
        for(int i=0;i<s.length();i++)
        { 
           if((int)map[s[i]]==0)
           map[s[i]]=t[i];
           else
           {
            if(map[s[i]]!=t[i])
            return false;
           }
        }

        return true;
}
    bool isIsomorphic(string s, string t) {
        
        return func(s,t)&&func(t,s);
    }
};