class Solution {
public:
    vector<vector<string>>result;
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<bool>>setcheck;
        string a;
        // 创建一个全为true的检查数组，true表示可以放置皇后
        vector<bool> tmp;
        vector<string>path;
        for (int j = 0; j < n; j++) {
            tmp.push_back(true);
            a += '.';
        }
        for (int j = 0; j < n; j++) {
            setcheck.push_back(tmp);
            path.push_back(a);
        }
        resetQueen(0, n, setcheck, path);
        return result;

    }
    void resetQueen(int i, int &n, vector<vector<bool>>& setcheck, vector<string>& path) {
        if (i == n) {
            result.push_back(path);
            return;
        }
        vector<vector<bool>>init = setcheck;
        vector<string> tmp = path;
        for (int j = 0; j < n; j++) {
            setcheck = init;
            path = tmp;
            if (setcheck[i][j]) {
                changeset(setcheck, path, i, j, n);
                resetQueen(i + 1, n, setcheck, path);
            }
        }
    }
    void changeset(vector<vector<bool>>& setcheck, vector<string>& path, int &i, int &j, int &n) {
        path[i][j] = 'Q';
        for (int line = i,row=1; line < n; line++,row++) {
            if (line + 1 < n) {
                setcheck[line + 1][j] = false;
                if (j-row >= 0) {
                    setcheck[line + 1][j-row] = false;
                }
                if (row + j < n) {
                    setcheck[line + 1][row+j] = false;
                }
            }
        }
    }
};