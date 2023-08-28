class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        int N_2=0,N_1=1,N=1;
        for(int i=2;i<=n;i++){
            N = N_1+N_2;
            N_2=N_1;
            N_1=N;
        }
        return N;       
    }
};