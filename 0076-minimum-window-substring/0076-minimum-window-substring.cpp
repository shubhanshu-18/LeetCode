class Solution {
public:
    string minWindow(string s, string t) {
        int m=t.size(),n=s.size(),l=0,r=0,minlen=INT_MAX,sInd=-1,cnt=0;
        int hash[256]={0};
        for(int i=0;i<m;i++){
            hash[t[i]]++;
        }
        while(r<n){
            if(hash[s[r]]>0) cnt+=1;
            hash[s[r]]--;
            while(cnt==m){
                if(r-l+1<minlen){
                    minlen=r-l+1;
                    sInd=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) cnt-=1;
                l++;
            }
            r+=1;
        }
        return sInd==-1?"":s.substr(sInd,minlen);
    }
};