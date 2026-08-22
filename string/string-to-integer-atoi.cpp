class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        int sgn=1,i=0;
        while(i<s.size()&&s[i]==' ')
            i++;
        if(i<s.size()&&s[i]=='-') {
            sgn = -1;
            i++;
        }
        else if(i<s.size()&&s[i]=='+') {
            i++;
        }
        for(;i<s.size();i++){
        
            if(isdigit(s[i])){
                ans=ans*10+(s[i]-'0');
            }
            else break;

            if (ans* sgn>INT_MAX)
                return INT_MAX;
            if (ans*sgn<INT_MIN)
                return INT_MIN;
        }
        
        return (int)(sgn*ans);
    }
};