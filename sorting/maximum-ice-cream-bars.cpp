class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int sum=0,cnt=0;
        sort (costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++){
            if(costs[i]+sum<=coins&&coins>sum){
                sum+=costs[i];
                cnt++;
            }
            else break;
        }
        return cnt;
        
    }
};