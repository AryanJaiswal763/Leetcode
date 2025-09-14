class Solution {
    public static int number(char ch){
        if(ch=='I')
        return 1;
        else if(ch=='V')
        return 5;
        else if(ch=='X')
        return 10;
        else if(ch=='L')
        return 50;
        else if(ch=='C')
        return 100;
        else if(ch=='D')
        return 500;
        else
        return 1000;
    }
    public int romanToInt(String s) {
        
        int i=0;
        int ans=0;
        while(i<s.length()-1){
            
            if(number( s.charAt(i) ) < number( s.charAt(i+1) ) )
            ans=ans-number(s.charAt(i));
            else
            ans=ans+number(s.charAt(i));

            i++;
        }
        
        ans=ans+number(s.charAt(i));
        return ans;
    }
}

// 1000-100+1000-10+100-1+5