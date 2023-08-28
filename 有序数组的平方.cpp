class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0,j=0;
        while(nums[i]<0){
            i++;
        }
        int o = i - 1;
        for(int j=0;j<nums.size();j++){
            nums[j]=nums[j]*nums[j];
        }
        vector<int> result;
        while(o>=0||i<=nums.size()){
            if(nums[o]<nums[i]){
                result.push_back(nums[o]);
                o--;
            }
            if(nums[o]>nums[i]){
                result.push_back(nums[i]);
                i++;
            }
        }
        while(o>=0)
          {  result.push_back(nums[o]);
            o--;}
        while(i<nums.size())
          {  result.push_back(nums[i++]);
            i++;}
        return result;
    }
};