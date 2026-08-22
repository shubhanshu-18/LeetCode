class Solution {
public:
    int lengthOfLastWord(string s) {
        int a=0;
        for (int i=s.size()-1;i>=0;i--){
            if(a>0&&s[i]==' ') break;
            else if( s[i]!=' ') a++;
        }
        return a;
    }
};