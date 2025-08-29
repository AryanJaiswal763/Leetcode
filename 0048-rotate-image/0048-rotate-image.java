class Solution {
    /* 
       00 01 02     20 10 00   20->00
       10 11 12     21 11 01   21->10
       20 21 22     22 12 20   02->22
    */

    public void rotate(int[][] matrix) {
        int n=matrix.length;
        // transpose
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        
        // reverse row values
        for(int i=0;i<n;i++){
           int left=0, right=n-1;
           while(left<right){
             int temp=matrix[i][left];
             matrix[i][left]=matrix[i][right];
             matrix[i][right]=temp;
             left++;
             right--;
           }
        }
    }
}