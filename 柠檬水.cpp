class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]!=5)return false;
        int a[2]={1,0};
        for(int i =1; i<bills.size();i++){
            if(bills[i]==5){
                a[0]++;
                continue;
            }
            if(bills[i]==10){
                if(!a[0])return false;
                a[0]--;
                a[1]++;
                continue;
            }
            if(bills[i]==20){
                if(a[0]&&a[1]){
                    a[0]--;
                    a[1]--;
                }else{
                    if(a[0]<3)return false;
                    else a[0]-=3;
                }
            }
        }
        return true;
    }
};