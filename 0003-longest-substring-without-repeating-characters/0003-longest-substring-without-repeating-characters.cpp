class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,maxx=0;
        unordered_set <char> st;
        while(r<s.size()){
            while(st.count(s[r])){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            int len=r-l+1;
            maxx=max(maxx,len);
            r++;
        }
        return maxx;
    }
};