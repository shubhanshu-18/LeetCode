class Solution {
public:
    int jump(vector<int>& nums) {
        int index=0,count=0,curr=0;
        if (nums.size()==1) return 0;
        
        for (int i=0;i<nums.size()-1;i++){
            index=max(index,i+nums[i]);
            if(i==curr) {
            count++;
            curr=index;
            }
        }
        
        return count;
    }
};