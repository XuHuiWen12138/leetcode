class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = nums.size()-1;
        for(int i =0;i<=j;i++)
        {
            while(nums[j]==val){
                j--;
                if(j<0){
                return 0;
            }
            }
            
            if(nums[i]==val){
                if(i<j){swap(nums,i,j);
                j--;}
                
            }
        }
        return ++j;
    }
    void swap(vector<int>& nums,int i, int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
};