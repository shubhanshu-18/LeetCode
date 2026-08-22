class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double f,k;
        f=round((1.8*celsius + 32)*100000.0)/100000.0;
        
        k=round((celsius+273.15)*100000.0)/100000.0;
        ans.push_back(k);
        ans.push_back(f);

        return ans;
    }
};