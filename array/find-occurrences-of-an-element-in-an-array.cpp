class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector <int> a;
        vector <int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(x==nums[i]){
                a.push_back(i);
            }
            
        }
        for(int i=0;i<queries.size();i++){
            if(queries[i]<=a.size()){
                ans.push_back(a[queries[i]-1]);
            }
            else ans.push_back(-1);
        }
        return ans;
        
    }
};