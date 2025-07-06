class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)
        return 0;

        
        string str=to_string(x);
        string  s=str;
        reverse(str.begin(),str.end());

        if(str==s)
        return 1;

        return 0;
    }
};