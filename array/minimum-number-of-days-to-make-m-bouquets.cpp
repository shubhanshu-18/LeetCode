class Solution {
public:
        
        
       bool possible(vector<int>& bloomDay,int day,int m,int k){
            int cnt=0,noofbag=0;
            for(int i=0;i<bloomDay.size();i++){
                if(bloomDay[i]<=day){
                    cnt++;
                }
                else{
                    noofbag+=(cnt/k);
                    cnt=0;
                }
            }
            noofbag+=(cnt/k);
            if(noofbag>=m) return true;
            else return false;
        }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n= bloomDay.size();
        if((long long)m*k>n) return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid=(low+high)/2;
             if(possible(bloomDay,mid,m,k)==true){

                high=mid-1;
             }
             else{
                low=mid+1;
             }
        }
        return low;
    }
};