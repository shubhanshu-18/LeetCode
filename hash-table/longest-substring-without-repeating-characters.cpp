class Solution{
public:
int lengthOfLongestSubstring(string s){
    int l=0,ans=0;
    for(int r=0;r<s.size();r++){
        for(int i=l;i<r;i++){
            if(s[i]==s[r]){
                l=i+1;
                break;
            }   
        }
        ans=max(ans,r-l+1);
    }
    return ans;
}
};