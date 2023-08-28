class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        int a[26];
        for(int i=0;i<26;i++){
            a[i]=0;
        } 
        for(int i=0;i<s.size();i++){
            a[int(s[i]-'a')]++;
            a[int(t[i]-'a')]--;
        }
        for(int i = 0 ;i<26;i++){
            if(a[i]!=0){
                return false;
            }
        }
        return true;
    }
};