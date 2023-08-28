class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if(!(nums1.size()&&nums2.size()))return vector<int>{};
        unordered_set<int> set;
        unordered_set<int>result;
        for(int i=0;i<nums1.size();i++){
            set.insert(nums1[i]);
        }
        for(int j=0;j<nums2.size();j++){
            if(set.find(nums2[j])!=set.end()){
                result.insert(nums2[j]);
            }
        }
        return vector<int>(result.begin(),result.end());
    }
};