class Solution {
public:
bool canplace(vector<int> position,int m,int dist){
    int n=position.size();
    int cnt=1,coord=position[0];
    for(int i=0;i<n;i++){
        if(position[i]-coord>=dist){
            cnt++;
            coord=position[i];
        }
    }
    if(cnt>=m) return true;
    else return false;
}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size(),low=0,h=position[n-1]-position[0];
        while(low<=h){
           int mid=(low+h)/2;
            if(canplace(position,m,mid)){
                low=mid+1;
            }
            else h =mid-1;
        }
        return h;
    }
};