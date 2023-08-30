class Solution {
public:
    string reverseWords(string s) {
        stack<string>tmp_s;
        int start, end;
        for (int i = 0; i < s.size(); ) {
            while (s[i] == ' ') {
                i++;
            }
            if (i >= s.size()) {
                break;
            }
            start = i;
            while (i < s.size() && s[i] != ' ') {
                i++;
            }
            end = i-1;
            string sub = s.substr(start, end - start + 1);
            tmp_s.push(s.substr(start, end - start + 1));
        }
        s.clear();
        while (!tmp_s.empty()) {
            s += tmp_s.top()+' ';
            tmp_s.pop();
        }
        s=s.substr(0,s.size()-1);
        return s;
    }
};