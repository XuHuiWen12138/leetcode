class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int num = 0;
        int cStart = 0;
        for(int i = 0;i<s.size()&&cStart<g.size();i++){
            if(g[cStart]<=s[i]){
                num++;
                cStart++;
            }
        }
        return num;
    }
};