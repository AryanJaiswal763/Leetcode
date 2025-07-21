class Solution {
public:
    string makeFancyString(string s) {
        string ans;
        for (char c : s) {
            int len = ans.length();
            if (len >= 2 && ans[len - 1] == c && ans[len - 2] == c) continue;
            ans += c;
        }
        return ans;
    }
};

