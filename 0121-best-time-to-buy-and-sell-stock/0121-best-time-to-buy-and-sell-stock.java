class Solution {
    public int maxProfit(int[] prices) {
        
        int maxProfit=0;
        int bestBuy=prices[0];

        for(int i=1;i<prices.length;i++){
            
            if(prices[i]>bestBuy){
                maxProfit=Math.max(maxProfit, prices[i]-bestBuy);
            }

            bestBuy=Math.min(bestBuy,prices[i]);
        }

        return maxProfit;




// o(n^2) time complexity


        // for(int i=0;i<prices.length-1;i++){
        //     for(int j=i+1;j<prices.length;j++){
        //         int num=prices[j]-prices[i];
        //         maxProfit=Math.max(maxProfit,num);
        //     }
        // }

        // return maxProfit;
    }
}