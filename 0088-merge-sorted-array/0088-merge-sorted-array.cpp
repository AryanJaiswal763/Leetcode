class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int ind=-1;
        for(int i=nums1.size()-1;i>=0;i--)
        {
            if(nums1[i]!=0)
            {
                ind=i+1;
                break;
            }
        }
        
        if(ind==-1)
        {
            for(int i=0;i<nums2.size();i++)
            {
            nums1[i]=nums2[i];
            }
        }
        
        else{
        for(int i=0;i<nums2.size();i++)
        {
            nums1[ind]=nums2[i];
            ind++;
        }
        }

        sort(nums1.begin(),nums1.end());
    }
};