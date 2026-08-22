class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int nas=0;
        for(int i=0;i<nums.size();i++){
            nas^=nums[i];
        }
        return nas;
    }
};