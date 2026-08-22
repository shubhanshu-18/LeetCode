class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> f;
        vector<int> ans;

        for(int n:nums) {
            f[n]++;
        }

        for(auto &t:f) {
            if(t.second>nums.size()/3)
                ans.push_back(t.first);
        }

        return ans;
    }
};