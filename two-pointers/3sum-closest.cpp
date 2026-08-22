class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort (nums.begin(),nums.end());
        int r = nums[0] + nums[1] + nums[2];
        for(int k=0;k<nums.size();k
        ++){
            int i=k+1,j=nums.size()-1;
            while(i<j){
               int min=nums[k]+nums[i]+nums[j];
                if(abs(target-min)<abs(target-r)) r=min;
                if(min>target){
                    j--;
                }
                else if(min<target){
                    i++;
                }
                else{
                    return target;
                    
                }
            }
        }
        return r;
    }
};