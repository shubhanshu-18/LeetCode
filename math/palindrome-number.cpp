class Solution {
public:
    bool isPalindrome(int x) {
        int t=x;
        double reverse=0;
        if(x==0) return true ;
    while(t>0){
        int d=t%10;
        reverse=reverse*10+d;
        t=t/10;
    }
    if(reverse==x) return true;
    else return false;
    }
    
};