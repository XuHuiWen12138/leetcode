class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0]==1)return 0;
        int a[100][100];
        int m = obstacleGrid.size();
        int  n = obstacleGrid[0].size();
        a[0][0]=1;
        for(int i=1;i<m;i++){
            a[i][0]=a[i-1][0];
            if(obstacleGrid[i][0]==1){
                a[i][0]=0;
            }
            
        }
        for(int i =1;i<n;i++){
            a[0][i] =a[0][i-1];
            if(obstacleGrid[0][i]==1)
            a[0][i]=0;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(obstacleGrid[i][j]==1){
                    a[i][j]=0;
                    continue;
                }
                if(i>0&&j>0){
                    a[i][j]=a[i-1][j]+a[i][j-1];
                }
            }
        }
        return a[m-1][n-1];
    }
};