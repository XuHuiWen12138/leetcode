class Solution {
public:
    bool isHappy(int n) {
        vector<int> dig;
        unordered_set<int>midlle;
        while(true){
            midlle.insert(n);
            while(n){
                dig.push_back(n%10);
                n/=10;
            }
            for(int i=0;i<dig.size();i++){
                n+=(dig[i]*dig[i]);
            }
            if(n==1){
                return true;
            }
            if(midlle.find(n)!=midlle.end()){
                return false;
            }
            dig.clear();
        }
    }
};