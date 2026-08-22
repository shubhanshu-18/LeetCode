class Solution {
public:
    int mySqrt(int x) {
        
        int left=1, right=x,ans;

        if (0==x) return 0;
        while(left<=right){
            int mid=left+ (right- left)/2;
            if (mid<=x/mid){
                left=mid+ 1;
                ans=mid;
            } 
            
            else{
                right =mid- 1;
            }
        }

        return ans;
    }
};