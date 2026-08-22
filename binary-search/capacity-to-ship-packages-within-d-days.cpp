class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end());
        int r=accumulate(weights.begin(),weights.end(),0);

        while(l<r){
            int mid=l+(r-l)/2;
            int d=1;
            int sum=0;
            for(int i=0;i<weights.size();i++){
                if(sum+weights[i]>mid){
                    d++;
                    sum=weights[i];
                }
                else{
                    sum+=weights[i];
                }
            }
            if(d<=days)
                r=mid;
            else
                l=mid+1;
        }
        return l;
    }
};