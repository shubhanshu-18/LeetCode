class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;

        for (string p : patterns) {
            int m = p.size();

            if (m > word.size())
                continue;

            for (int i = 0; i <= word.size() - m; i++) {
                if (word.substr(i, m) == p) {
                    count++;
                    break;
                }
            }
        }

        return count;
    }
};