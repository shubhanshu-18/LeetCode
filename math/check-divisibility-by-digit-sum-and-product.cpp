class Solution {
public:
    bool checkDivisibility(int n) {
        int digitsum=0,digitpro=1;
        int orig=n;
        while(n!=0){
            int digit=n%10;
            digitsum+=digit;
            digitpro*=digit;
            n=n/10;
        }
        int sum= digitsum+digitpro;
        if(orig%sum==0){
            return true;
        }
        else return false;
    }
};