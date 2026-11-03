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
        func(ind+1,ls,ans,arr,sum-arr[ind]);
        ls.pop_back();
        for(int j=ind+1;j<arr.size();j++){
            if(arr[j]!=arr[ind]){
                func(j,ls,ans,arr,sum);
                break;
            }
        }
        
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ls;
        func(0,ls,ans,candidates,target);
        return ans; 
    }
};