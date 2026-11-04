class Solution {
    void func (int ind ,int k,int sum,vector<int> &arr,vector<vector<int>> &ans){
        if(sum==0 && arr.size()==k){
            ans.push_back(arr);
            return ;
        }
        if(sum<=0||arr.size()>k)return ;
        for(int i=ind;i<10;i++){
            if(i<=sum){
                arr.push_back(i);
                func(i+1,k,sum-i,arr,ans);
                arr.pop_back();
            }
            else break;

        }
         
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> arr;
        func(1,k,n,arr,ans);
        return ans;
    }
};