class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int goal) {
        return helper(nums,goal)-helper(nums,goal-1);
    }
    int helper(vector<int>& nums, int goal){
        int l=0,r=0,count=0;
        long long sum=0;
        if (goal<0) return 0;
        while(r<nums.size()){
            if(nums[r] % 2 != 0)
                sum++;
            while(sum>goal){
                if(nums[l] % 2 != 0)
                    sum--;
                l++;
            }
            count+=(r-l+1);
            r++;
        }
        return count;
    }
};