class Solution {
public:
    bool isPalindrome(string s) {
        string news;
        for (int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                news+=tolower(s[i]);
            }
        }
        int l=0,r=news.size()-1;
        while(l<=r){
            if(news[l]==news[r]){
                l++;r--;
            }
            else return false;
        }
        return true;
        
    }
};