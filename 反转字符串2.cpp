class Solution {
public:
    string reverseStr(string s, int k) {
        short n = 2 * k;
        while (n <= s.size()) {
            reverse(s, n - 2 * k, n - k-1);
            n += 2 * k;
        }
        short res = s.size() - n + 2 * k;
        if (res > k) {
            reverse(s, s.size() - res, s.size() - res+ k-1);
        }
        else {
            reverse(s, s.size()- res, s.size() - 1);
        }
        return s;
    }
    void reverse(string& s, int begin, int end) {
        while (begin < end) {
            char tmp = s[begin];
            s[begin] = s[end];
            s[end] = tmp;
            begin++, end--;
        }
    }
};