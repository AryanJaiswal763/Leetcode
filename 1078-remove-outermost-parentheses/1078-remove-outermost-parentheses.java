class Solution {
    public String removeOuterParentheses(String s) {
        String ans="";
        int count=0;
        for(int i=0;i<s.length();i++){
           if(s.charAt(i)=='(')
           {
              if(count==0)
              count++;
              else{
                ans=ans+s.charAt(i);
                count++;
              }
           }
           else
           {
               if(count>1){
                count--;
                ans=ans+s.charAt(i);
               }
               else{
                count--;
               }
           }
        }

        return ans;
    }
}