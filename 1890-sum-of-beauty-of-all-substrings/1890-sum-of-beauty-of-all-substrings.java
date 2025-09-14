class Solution {
    public int getMaxValue(int[] freq){
        int maxNum=0;
        for(int i=0;i<26;i++){
            maxNum=Math.max(maxNum,freq[i]);
        }

        return maxNum;
    }

    public int getMinValue(int[] freq){
        int minNum=Integer.MAX_VALUE;
         for(int i=0;i<26;i++){
            if(freq[i]!=0)
            minNum=Math.min(minNum,freq[i]);
        }

        return minNum;
    }
    public int beautySum(String s) {
        
        int total=0;
        for(int i=0;i<s.length();i++){
            int[] freq=new int[26];

            for(int j=i;j<s.length();j++){
                freq[s.charAt(j)-'a']++;
                
                total=total+(getMaxValue(freq)-getMinValue(freq));
            }
        }

        return total;
    }
}