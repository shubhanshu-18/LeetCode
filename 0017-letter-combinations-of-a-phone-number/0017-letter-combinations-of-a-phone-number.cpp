class Solution {
    void func(int ind , string s, vector<string>& ans,string digit,string combos[]){
        if(ind==digit.size()){
            ans.push_back(s);
            return;
        }
        int num=digit[ind]-'0';
        for(int i=0;i<combos[num].size();i++){
            func(ind+1,s+combos[num][i],ans,digit,combos);
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string combo[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string s="";
        func(0,s,ans,digits,combo);
        return ans;
    }
};