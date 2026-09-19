class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0,maxlen=0,zero=0;
        while(r<nums.size()){
            if(nums[r]==0){
                zero++;
            }
            if(zero>1){
                if(nums[l]==0){
                    zero--;
                }l++;
            }
            maxlen=max(maxlen,r-l);
            r++;
        }
        return maxlen;
    }
};