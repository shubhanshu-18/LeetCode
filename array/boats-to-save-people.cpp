class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0,j=people.size()-1;
        int boat=0;
        sort(people.begin(), people.end());
        while(i<=j){
            
            if(people[i]+people[j]<=limit){
                
                i++;
            }
            j--;
            boat++;
        }
        return boat;
    }
};