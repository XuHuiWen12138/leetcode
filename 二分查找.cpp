class Solution {
public
    int search(stdvectorint& nums, int target) {
        int half;
        int low = 0;
        int high = nums.size() ;
        if (nums.size()==0)
            return -1;
        while (low =high)
        {
            half = (high + low)  2;
            if(half=nums.size())
            return -1;
            if (nums[half] == target)
                return half;
            else if (nums[half]  target)
                high = half-1;
            else
                low = half+1;
            
        }
        return -1;

    }
};