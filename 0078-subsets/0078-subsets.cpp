class Solution {
    void set(int ind, vector<int>& ls,vector<vector<int>>& ans, vector<int>& arr){
        if(ind==arr.size()){
            ans.push_back(ls);
            return ;
        }
        ls.push_back(arr[ind]);
        set(ind+1,ls,ans,arr);
        ls.pop_back();
        set(ind+1,ls,ans,arr);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ls;
        set(0,ls,ans,nums);
        return ans;
    }
};