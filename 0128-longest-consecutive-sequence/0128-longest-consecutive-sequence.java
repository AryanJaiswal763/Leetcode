class Solution {
    public static int findMaxLength(HashMap<Integer,Boolean>map, int key){
        int ans=0;
        while(map.containsKey(key)){
            ans++;
            key++;
        }

        return ans;
    }
    public int longestConsecutive(int[] nums) {
        
// 1 2 3 4 100 200
// 0 1 1 2

        HashMap<Integer,Boolean>map=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            map.put(nums[i],true);
        }
 

        for(Integer num: nums){
            if(map.containsKey(num-1))
            map.put(num,false);
        }
        int maxLen=0;
        for(Integer key:map.keySet()){
            if(map.get(key)==true){
               maxLen=Math.max(maxLen, findMaxLength(map,key));
            }
        }

        return maxLen;

        // O{nlongn} time complexity

        // Arrays.sort(nums);
        // int  maxlen=1, len=1;
        // for(int i=1;i<nums.length;i++){
            
        //     if(nums[i]==nums[i-1])
        //     continue;

        //     else if(nums[i-1]+1==nums[i]){
        //        len++;
        //        maxlen=Math.max(maxlen,len);
        //     }
        //     else{
        //         len=1;
        //     }
        // }

        //  if(nums.length==0)
        //  return 0;

        // return maxlen;

    }
}