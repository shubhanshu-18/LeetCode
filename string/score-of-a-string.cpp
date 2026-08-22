class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
       for (int i=0;i<s.size()-1;i++){
        int k=(abs(s[i]-s[i+1]));
        ans+=k;
       } 
       return ans;
    }
};