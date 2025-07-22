class Solution {
    public String reverseWords(String s) {
          Stack<String>st=new Stack<>();
         int i=0;
        while(i<s.length()){

            String s1="";
            while(s.charAt(i)!=' '){
            s1=s1+s.charAt(i);
            i++;
            if(i==s.length())
            break;
            }
            st.push(s1);
            i++;
        }

        String str="";
        while(!st.isEmpty()){
            str=str+st.peek();
            st.pop();
            str=str+" ";
        }
      
        String ans="";
        i=0;
        while(i<str.length()){
            String newS="";
            while(str.charAt(i)!=' '){
                newS=newS+str.charAt(i);
                i++;
                if(i==str.length())
                break;
            }
            if(newS.length()!=0)
            ans=ans+newS+" ";

            i++;
        }

      
       return ans.substring(0,ans.length()-1);
    }
}