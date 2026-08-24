class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,l=m+n-1;
        while(j>=0){
            if(i>=0&&nums1[i]>nums2[j]){
                nums1[l]=nums1[i];
                l--;
                i--;
            }
            else{
                nums1[l]=nums2[j];
                l--;
                j--;
            }
        }
    }
};