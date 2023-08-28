class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.size()<ransomNote.size())return false;
        short a[26];
        for(short i=0;i<26;i++){
            a[i]=0;
        }
        for(short i=0;i<magazine.size();i++){
            a[int(magazine[i]-'a')]++;
            if(i<ransomNote.size()){
                a[int(ransomNote[i]-'a')]--;
            }
        }
        for(short i=0;i<26;i++){
            if(a[i]<0){
                return false;
            }
        }
        return true;
    }
};