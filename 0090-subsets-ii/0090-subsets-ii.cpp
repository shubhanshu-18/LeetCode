class Solution {
    void func(int ind ,vector<int >& ls,vector<vector<int>>& ans ,vector<int> &arr){
        if(ind==arr.size()){
            ans.push_back(ls);
            return;
        }
        ls.push_back(arr[ind]);
        func(ind+1,ls,ans,arr);
        ls.pop_back();
        for(int i=ind+1;i<arr.size();i++){
            if(arr[i]!=arr[ind]){
                func(i,ls,ans,arr);
                return;
            }
        }
        func(arr.size(),ls,ans,arr);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> ls;
        func(0,ls,ans,nums);
        return ans;
    }
};