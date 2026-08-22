class Solution {
public:
    bool canJump(vector<int>& nums) {
        int index=0;
        if (nums.size()==1) return true;
        if(nums[0]==0) return false;
        for (int i=0;i<nums.size()-1;i++){
            if(i>index) return false;
            
            index=max(index,i+nums[i]);
        }
        if(index>=nums.size()-1) return true;
        return false;
    }
};