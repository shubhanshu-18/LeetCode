class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        int hs1[26]={0},hs2[26]={0};
        for(int i=0;i<s1.size();i++){
            hs1[s1[i]-'a']++;
            hs2[s2[i]-'a']++;

        }
        if(equal(hs1,hs1+26,hs2)){
            return true;
        }
        for(int i=s1.size();i<s2.size();i++){
            hs2[s2[i]-'a']++;
            hs2[s2[i-s1.size()]-'a']--;
            if(equal(hs1,hs1+26,hs2)){
                return true;
            }
        }
        
        return false;

    }
};