class Solution {
public:
    int largestInteger(int n, int s) {
        if(s>9*n) 
            return -1;
        string a="";
        for(int i=0;i<n;i++){
            if(s>=9){
                a+='9';
                s-=9;
            }
            else{
                a+=char('0'+s);
                s=0;
            }
        }
        int i=0;
        while(i+1<a.size()&& a[i]=='0'){
            i++;
        }
        return stoi(a.substr(i));
    }
};