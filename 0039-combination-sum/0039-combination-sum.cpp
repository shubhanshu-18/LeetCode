class Solution {
    void func(int ind ,vector<int>& ls,vector<vector<int>>& ans,vector<int>& arr,int sum){
        if(sum==0){
            ans.push_back(ls);
            return;
        }
        if(sum<0||ind==arr.size()){
            return;
        }
        ls.push_back(arr[ind]);
        func(ind,ls,ans,arr,sum-arr[ind]);
        ls.pop_back();
        func(ind+1,ls,ans,arr,sum);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ls;
        func(0,ls,ans,candidates,target);
        return ans;
    }
};