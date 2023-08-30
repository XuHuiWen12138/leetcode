class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for (int a = 0; a < s.size() / 2; a++) {
            if (s.size() % (a + 1)) {
                continue;
            }
            int c = s.size() / (a + 1);
            bool flag = true;
            for (int j = 0; j < c-1; j++) {
                string w = s.substr(0, a+1);
                string y = s.substr((a+1) * (j + 1), a + 1);
                if (w.compare(y)) {
                    flag = false;
                }
            }
            if (flag) {
                return true;
            }
        }
        return false;
    }
};