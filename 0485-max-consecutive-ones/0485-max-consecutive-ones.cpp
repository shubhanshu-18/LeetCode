class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,maxx=0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]==1){
                maxx++;
                ans=max(maxx,ans);
            }
            else {maxx=0;
            continue;}
        }
        return ans;
    }
};