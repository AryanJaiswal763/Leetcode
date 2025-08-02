class Solution {
    public List<List<Integer>> generate(int rows) {
       
        List<List<Integer>> arr= new ArrayList<>();
        arr.add(new ArrayList<>(Arrays.asList(1)));
        if(rows==1)
        return arr;

        for(int i=0; i<rows-1; i++)
        {
            List<Integer>a=new ArrayList<>();
            a.add(1);
            
            int x=0, y=1;
            
            while(y<arr.get(i).size()){
                a.add(arr.get(i).get(x)+arr.get(i).get(y));
                x++;
                y++;
            }
            a.add(1);
            arr.add(a);
        }

        return arr;
    }
}