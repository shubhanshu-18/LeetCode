class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,maxx=0;
        vector<int> hash(256, -1);
        while(r<s.size()){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;

                }
            }
            int len=r-l+1;
            maxx=max(maxx,len);
            hash[s[r]]=r;
            r++;
        }
        return maxx;
    }
};