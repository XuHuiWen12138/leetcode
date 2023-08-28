class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> set;
        unordered_map<int,int> set1;
        int result =0;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums1.size();j++){
                if(set.find(nums1[i]+nums2[j])==set.end()){
                    set[nums1[i]+nums2[j]]=1;
                }else{
                    set[nums1[i]+nums2[j]]++;
                }

            }
        }
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums1.size();j++){
                if(set1.find(nums3[i]+nums4[j])==set1.end()){
                    set1[nums3[i]+nums4[j]]=1;
                }else{
                    set1[nums3[i]+nums4[j]]++;
                }
            }
        }  
        for(auto it=set.begin();it!=set.end();it++){
            if(set1.find(-it->first)!=set1.end()){
                result+=it->second*set1[-it->first];
            }
        }
        return result;
    }
};