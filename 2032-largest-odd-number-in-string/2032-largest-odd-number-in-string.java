class Solution {
    public String largestOddNumber(String s) {
        int ind=-1,len=s.length();
        for(int i=s.length()-1;i>=0;i--){
            if(s.charAt(i)=='1'||s.charAt(i)=='3'||s.charAt(i)=='5'||s.charAt(i)=='7'||s.charAt(i)=='9'){
                ind=i;
                break;
            }
            len--;
        }
        if(ind==-1)
        return "";
          
        return s.substring(0,len);
    }
}