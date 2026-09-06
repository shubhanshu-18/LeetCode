class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int r=0;
        unordered_map<int,int> mpp;
        if(k==0) return false;
        while(r<nums.size()){
            if(mpp.count(nums[r])){
                int l=mpp[nums[r]];
                if((r-l)<=k){
                    return true;
                }
            }
            mpp[nums[r]]=r;
            r++;
        }
        return false;
    }
};