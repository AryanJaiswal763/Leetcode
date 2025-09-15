class Solution { 
    public int[][] merge(int[][] intervals) {
        
        if(intervals.length==1)
        return intervals;

        Arrays.sort(intervals, (a,b)->Integer.compare(a[0],b[0]));
        int start=intervals[0][0];
        int end=intervals[0][1];
        List<List<Integer>>list=new ArrayList<>();

        for(int i=0;i<intervals.length-1;i++){

           if(intervals[i+1][0]<=end){
            start=Math.min(start,intervals[i+1][0]);
            end=Math.max(end,intervals[i+1][1]);
           }

           else{
                list.add(Arrays.asList(start,end));
                start=intervals[i+1][0];
                end=intervals[i+1][1];
           }
        }

        if(start<=intervals[intervals.length-2][1]){
            start=Math.min(start,intervals[intervals.length-2][0]);
            end=Math.max(end,intervals[intervals.length-2][1]);
            list.add(Arrays.asList(start,end));
        }
        else{
             list.add(Arrays.asList(start,end));
        }
        
        int row=list.size(),col=2;
        int[][] arr=new int[row][col];
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                arr[i][j]=list.get(i).get(j);
            }
        }

        return arr;

    }
}