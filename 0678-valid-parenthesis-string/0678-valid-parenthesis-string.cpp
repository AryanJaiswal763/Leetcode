// class Solution {
// public:
// bool function(string s, int count, int ind, int n){

//     if(ind==n)
//     return count==0;
    
//     if(count<0)
//     return false;

//     if(s[ind]=='(')
//     return function(s,count+1,ind+1,n);
//     if(s[ind]==')')
//     return function(s, count-1, ind+1,n);
 
//     return function(s,count,ind+1,n)||function(s,count+1,ind+1,n)||
//            function(s,count-1,ind+1,n);
// }
    // bool checkValidString(string s) {
    //   return function(s, 0, 0, s.length());
    class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0;
        for (char c : s) {
            if (c == '(') {
                low++;
                high++;
            } else if (c == ')') {
                low--;
                high--;
            } else { // c == '*'
                low--;     // treat as ')'
                high++;    // treat as '('
            }
            if (high < 0) return false;
            if (low < 0) low = 0;
        }
        return low == 0;
    }


    
};