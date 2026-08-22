class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
          if(s.empty()) return "";        sort (s.begin(),s.end());
            string first=s[0];
            string last=s[s.size()-1];
            int length=min(first.size(),last.size());
            string ans="";
            for(int i=0;i<length;i++){
                
                if(first[i]!=last[i]) return ans;
                ans+=first[i];
            }
            return ans;
        
    }
};