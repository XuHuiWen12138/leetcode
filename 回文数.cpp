class Solution {
public:
    bool isPalindrome(int x) {
    int origin = x;
    if (x < 0)
        return false;
    if (x == 0)
        return true;
    std::vector<int> tmp;
    while (x) {
        int i = x % 10;
        tmp.push_back(i);
        x /= 10;
    }
    if(tmp.size()==1)
        return true;
    for(int i=0;i<tmp.size()/2;i++){
        if(tmp[i]!=tmp[tmp.size()-i-1])
            return false;
    }
    return true;
}
};