class Solution {
public:
    long long hours(vector<int> arr,long long hourly){
        long long hour=0;
        for(int i=0;i<arr.size();i++){
            hour+=(arr[i]+hourly-1) / hourly;
        }
        return hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=*max_element(piles.begin(),piles.end()),ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            long long totalhrs=hours(piles,mid);
            if(totalhrs<=h){
                ans=mid;
                high=mid-1;

            }
            else low=mid+1;
        }
        return ans;
    }
};