class Solution {
public:
    int subtractProductAndSum(int n) {
        int prd=1,sum=0;
        while(n!=0){
           int  m=n%10;
            prd*=m;
            sum+=m;
            n/=10;

        }
        return prd-sum;
        
    }
};