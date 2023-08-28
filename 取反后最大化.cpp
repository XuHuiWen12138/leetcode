class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int min =0;
        int change = 0;
        for (int i = 0 ; i<nums.size();i++){
            if(nums[i]>=0)
            break;
            min++;
        }
        for(int i =0;i<min&&i<k;i++){
            nums[i] = -nums[i];
            change++;
        }
        if(min>=k){
            return accumulate(nums.begin(),nums.end(),0);
        }else{
            if(!((k - min) % 2)){
                return accumulate(nums.begin(),nums.end(),0);
            }else{
                 *min_element(nums.begin(), nums.end()) *=-1;
                return accumulate(nums.begin(),nums.end(),0);
            }
        }
    }
};