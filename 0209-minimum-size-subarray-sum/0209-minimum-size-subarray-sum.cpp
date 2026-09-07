class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0,sum=0,maxx=INT_MAX;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>=target){
                
                maxx=min(maxx,r-l+1);
                sum-=nums[l];
                l++;
                
            }
            r++;
            
        }
        return maxx==INT_MAX?0:maxx;
        
    }
};