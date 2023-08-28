class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        short index = findlastup(nums);
        if (index == -1)return sort(nums.begin(), nums.end());
        short min_index = findmin(nums, index+1,nums[index]);
        swap(nums, index, min_index);
        sort(nums.begin() + index + 1, nums.end());
    }
    short findlastup(vector<int>& nums) {
        short index = -1;
        for (short i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] > nums[i])
                index = i;
        }
        return index;
    }
    short findmin(vector<int>& nums, int index,int last) {
        short min = 101;
        short j = index;
        for (short i = index; i < nums.size(); i++) {
            if (nums[i] < min&&nums[i]>nums[index - 1])
            {
                j = i;
                min = nums[i];
            }
        }
        return j;
    }
    void swap(vector<int>& nums, int i, int j) {
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
    }
};