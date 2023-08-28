class Solution {
public:
    int climbStairs(int n) {
        int N_1=1,N_2=0,N=1;
        for(int i=1;i<=n;i++){
            N=N_1+N_2;
            N_2=N_1;
            N_1=N;
        }
        return N;
    }
};