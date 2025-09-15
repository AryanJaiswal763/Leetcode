class Solution {
    public List<Integer> majorityElement(int[] nums) {
        
        int n=nums.length;
        int num=n/3;

        HashMap<Integer,Integer>map=new HashMap<>();
        for(int i=0;i<n;i++){
            map.put(nums[i],map.getOrDefault(nums[i],0)+1);
        }

        List<Integer>list=new ArrayList<>();
        for(Integer k:map.keySet()){
           if(map.get(k)>num)
           list.add(k);
        }


        return list;
    }
}