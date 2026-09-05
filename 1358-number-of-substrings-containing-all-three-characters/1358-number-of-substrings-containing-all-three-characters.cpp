class Solution {
public:
    int numberOfSubstrings(string s) {
        int lastseen[3] ={-1,-1,-1},count =0;
        for(int i=0;i<s.size();i++){
            lastseen[s[i]-'a']=i;
            count+=min({lastseen[0],lastseen[1],lastseen[2]})+1;
        }
        return count;
    }
};