class Solution {
public:
    bool rotateString(string s, string goal) {
        string left="";
        for(int i=0;i<s.size();i++){
            string right =s.substr(i);
            if(right+left==goal) return true;
            left+=s[i];
        }
        return false;
    }
};