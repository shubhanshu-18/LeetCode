class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,maxf=INT_MIN,maxx=INT_MIN,hash[26]={0};
        while(r<s.size()){
            hash[s[r]-'A']++;
           maxf= max(maxf,hash[s[r]-'A']);
        
        if((r-l+1)-maxf>k){
            hash[s[l]-'A']--;
            l++;
            
        }
        if((r-l+1)-maxf<=k){
            maxx=max(maxx,r-l+1);
            
        }
        r++;
        }
        
        return maxx;
    
    }
};