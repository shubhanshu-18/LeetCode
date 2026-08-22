class Solution {
public:
    int mirrorDistance(int n) {
        int k=n;
        int rev=0;
        while(k!=0){
            int digit=k%10;
            rev=rev*10+digit;
            k/=10;
        }
        return abs(rev-n);
    }
};