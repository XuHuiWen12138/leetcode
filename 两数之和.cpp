class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> resoult;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    resoult.push_back(i);
                    resoult.push_back(j);
                    return resoult;
                }
            }
        }
        return resoult;
    }
};