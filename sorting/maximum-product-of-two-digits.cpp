class Solution {
public:
    int maxProduct(int n) {
        vector <int > m;
        while(n!=0){
            int digit=n%10;
            m.push_back(digit);
            n=n/10;
        }
        sort (m.begin(),m.end());
        return  m[m.size()-1]*m[m.size()-2];
    }
};