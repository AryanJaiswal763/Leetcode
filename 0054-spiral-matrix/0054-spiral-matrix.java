class Solution {
    /*            right  =0
                00 01 02
top,bottom->    10 11 12
                20 21 22

                1         1 2 3 4   top=2 right=2   1
                2       
                       right=-1
                3
                4
    */
    public List<Integer> spiralOrder(int[][] matrix) {
        
        int top=0, bottom=matrix.length-1;
        int left=0, right=matrix[0].length-1;

        List<Integer>list=new ArrayList<>();
        while(top<=bottom && left<=right){

            for(int i=left;i<=right;i++){
               list.add(matrix[top][i]);
            }
            top++;

            for(int i=top;i<=bottom;i++){
                list.add(matrix[i][right]);
            }
            right--;
            
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                list.add(matrix[bottom][i]);
             }
              bottom--;
            }
     
             if(left<=right)
             for(int i=bottom;i>=top;i--){
                list.add(matrix[i][left]);
                
             }
             left++;
        }

        return list;
    }
}