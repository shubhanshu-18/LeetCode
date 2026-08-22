class Solution {
public:
    
    int maxDistinct(string s) {
        unordered_map<char,bool> ayush;
         int i=0,n=s.size();
        vector<char> c;
        while(n--){
           if(!ayush[s[i]]){
            ayush[s[i]]=1;
            c.push_back(s[0]);
           }i++;
        }
        return c.size();
    }
};