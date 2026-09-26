class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> newNums;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==key){
                newNums.push_back(i);
            }
        }
        vector<int> result;
        for(int m=0;m<nums.size();m++){
            for(int n=0;n<newNums.size();n++){
                if(abs(m - newNums[n]) <= k){
                    result.push_back(m);
                    break;
                }

            }
        }  
        sort(result.begin(),result.end());
        return result;      
    }
};