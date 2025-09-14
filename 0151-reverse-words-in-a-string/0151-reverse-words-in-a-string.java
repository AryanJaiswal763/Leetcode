class Solution {
    public String reverseWords(String s) {

        s=s.trim();
        String[] words=s.split("\\s++");

        int left=0, right=words.length-1;
        while(left<right){
           
           String temp=words[left];
           words[left]=words[right];
           words[right]=temp;
           left++;
           right--;
        }

        return String.join(" ",words);

        // String str="";
        // int i=s.length()-1;
        // while(i>=0){
        //     if(s.charAt(i)==' '){
        //     i--;
        //     continue;
        //     }
            
        //     StringBuilder sb=new StringBuilder();
        //     while(i>=0 && s.charAt(i)!=' '){
        //       sb.append(s.charAt(i));
        //       i--;
        //     }
        //     sb.reverse();
        //     str=str+sb.toString();
        //     str=str+" ";

        //   i--;
        // }

        // return str.substring(0,str.length()-1);
    }
}