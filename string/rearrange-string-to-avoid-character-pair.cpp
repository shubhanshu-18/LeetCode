class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string mid="";
        int cx=0,cy=0;
        for(char c:s){
            if(c==x) cx++;
            else if(c==y) cy++;
            else mid+=c;
        }
        return string(cy,y)+mid+string(cx,x);
    }
    
};