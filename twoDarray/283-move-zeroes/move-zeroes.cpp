class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count = count+1;
            }
        }
        int n=count;
        
        for(int j=1;j<=n;j++){
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i] ==0 && nums[i+1]!=0){
                    swap(nums[i],nums[i+1]);
                    
                }
                else if(nums[i] ==0 && nums[i+1]==0){
                    continue;
                }
            }
            count--;
        }
    }
};