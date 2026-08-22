class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> nums1=nums;
        sort(nums1.begin(),nums1.end());
        int l=(nums.size()-1)/2,r=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=nums1[l];
                l--;
            }
            else 
            {nums[i]=nums1[r];
            r--;}
        }
    
    }
};