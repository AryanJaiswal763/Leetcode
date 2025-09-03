class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        
        int ind=m+n-1;
        int i=m-1, j=n-1;

        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[ind]=nums1[i];
                i--;
            }
            else{
                nums1[ind]=nums2[j];
                j--;
            }

            ind--;
        }

         while(j>=0){
            nums1[ind]=nums2[j];
            j--;
            ind--;
         }



        // Using extra space O(n);

        // ArrayList<Integer>list=new ArrayList<>();
        // int i=0,j=0;
        // while(i<m && j<n){
        //   if(nums1[i]<=nums2[j]){
        //   list.add(nums1[i]);
        //   i++;
        //   }

        //   else{
        //     list.add(nums2[j]);
        //     j++;
        //   }
        // }

        // while(i<m){
        //     list.add(nums1[i]);
        //     i++;
        // }

        // while(j<n){
        //     list.add(nums2[j]);
        //     j++;
        // }

        // for(int k=0;k<list.size();k++){
        //     nums1[k]=list.get(k);
        // }
    }
}