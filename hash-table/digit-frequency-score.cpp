class Solution {
public:
    int digitFrequencyScore(int n) {
        vector <int > a;
        while(n!=0){
            int digit =n%10;
            a.push_back(digit);
            n/=10;
        }
        int max=INT_MIN;
        for (int i=0;i<a.size();i++){
            if(a[i]>max) max=a[i];
        }
        vector <int > hash(max+1,0);
        for (int i=0;i<a.size();i++){
            hash[a[i]]++;
        }
        int ans=0;
        for(int i=0;i<hash.size();i++){
            ans+=i*hash[i];
        }
        return ans;
    }
};