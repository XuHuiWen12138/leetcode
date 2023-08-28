class Solution {
public:
    vector<int> nums;
    vector<vector<int>> result;
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        recunum(nums,1,k,n);
        return result;
    }
    void recunum(vector<int> nums,int i,int k,int n){
        if(nums.size()==k){
            result.push_back(nums);
            return;
        }
        if(i>n||n-i+nums.size()+1<k){
            return;
        }
        recunum(nums,i+1,k,n);
        nums.push_back(i);
        recunum(nums,i+1,k,n);
        return;
    }
};