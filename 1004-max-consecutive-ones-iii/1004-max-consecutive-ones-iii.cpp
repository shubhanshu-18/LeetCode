class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,maxx=0;
        int m=k;
        while(r<nums.size()){
            
                if(nums[r]==0) k--;
                while (k < 0) {
                if (nums[l] == 0)
                    k++;

                l++;
                }
                int len=r-l+1;
                maxx=max(maxx,len);
                r++;
            
        }
        return maxx;
    }
};