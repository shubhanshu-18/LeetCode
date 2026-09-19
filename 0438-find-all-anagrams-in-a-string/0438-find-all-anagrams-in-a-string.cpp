class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(p.size()>s.size())
            return ans;
        int hs1[26]={0},hs2[26]={0};
        for(int i=0;i<p.size();i++){
            hs1[p[i]-'a']++;
            hs2[s[i]-'a']++;

        }
        if(equal(hs1,hs1+26,hs2))
            ans.push_back(0);
        for(int i=p.size();i<s.size();i++){
            hs2[s[i]-'a']++;
            hs2[s[i-p.size()]-'a']--;
            if(equal(hs1,hs1+26,hs2)){
                ans.push_back(i-p.size()+1);
            }
        }
        return ans;
    }
};