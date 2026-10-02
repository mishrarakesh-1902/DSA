class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<nums2.size();i++){
            for(int j=m;j<nums1.size();j++){
                if(nums1[j] == 0 ){
                    nums1[j]=nums2[i];
                    break;

                }
            }
            
        }            
        sort(nums1.begin(), nums1.end());
    
    }
};