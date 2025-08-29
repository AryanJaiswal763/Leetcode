class Solution {
    public int subarraySum(int[] nums, int k) {
     
     
     int count=0;
     Map<Integer,Integer>map=new HashMap<>();

     int[] prefixSum=new int[nums.length];
     prefixSum[0]=nums[0];

     for(int i=1;i<nums.length;i++){
        prefixSum[i]=prefixSum[i-1]+nums[i];
     }

     for(int i=0;i<nums.length;i++){
        if(prefixSum[i]==k)
        count++;

        int val=prefixSum[i]-k;
        if(map.containsKey(val)){
            count=count+map.get(val);
        }

        map.put(prefixSum[i], map.getOrDefault(prefixSum[i],0)+1);
        
     }





        // for(int i=0;i<nums.length;i++){
        //     int sum=0;
        //     for(int j=i;j<nums.length;j++){
        //         sum=sum+nums[j];
        //         if(sum==k){
        //         count++;
        //         }

        //     }
        // }

        return count;
    }
}