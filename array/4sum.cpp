class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j=n-1;j>i+2;j--){
                if(j<n-1 && nums[j] == nums[j+1]) continue;
            int k=i+1,l=j-1;
            while(k<l){
                
               long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[l];
                if(sum==target) {
                    vector <int> t={nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(t);
                    k++;l--;
                    while(k<l && nums[k]==nums[k-1])k++;
                    while(k<l && nums[l]==nums[l+1])l--;
                    }
                else if(sum>target) l--;
                else k++;
                }   
            }
        }
        return ans;
    }
};