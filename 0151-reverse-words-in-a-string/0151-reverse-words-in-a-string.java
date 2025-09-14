class Solution {
    public String reverseWords(String s) {

        String str="";
        int i=s.length()-1;
        while(i>=0){
            if(s.charAt(i)==' '){
            i--;
            continue;
            }
            
            StringBuilder sb=new StringBuilder();
            while(i>=0 && s.charAt(i)!=' '){
              sb.append(s.charAt(i));
              i--;
            }
            sb.reverse();
            str=str+sb.toString();
            str=str+" ";

          i--;
        }

        return str.substring(0,str.length()-1);
    }
}