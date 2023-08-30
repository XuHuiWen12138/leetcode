class Solution {
public:
    string reverseLeftWords(string s, int n) {
        string a;
        for(int i=n;i<s.size();i++){
            a+=s[i];
        }
        for(int i=0;i<n;i++){
            a+=s[i];
        }
        return a;
    }
};
