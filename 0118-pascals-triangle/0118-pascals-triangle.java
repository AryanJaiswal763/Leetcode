class Solution {
    public List<List<Integer>> generate(int numRows) {
        
        List<List<Integer>>list=new ArrayList<>();

        List<Integer>list1=new ArrayList<>();
        list1.add(1);
        list.add(list1);

        if(numRows==1)
        return list;

        int i=0;
        while(i<numRows-1){

             int x=0,y=1;
             List<Integer>arr=new ArrayList<>();
             arr.add(1);

             while(y<list.get(i).size()){
               arr.add(list.get(i).get(x)+list.get(i).get(y));
               x++;
               y++;
             }

             arr.add(1);
             list.add(arr);

          i++;
        }


         return list;
    }
}