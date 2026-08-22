class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int maxx=sum;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            maxx=max(sum,maxx);
        }
        return maxx;
    }
};