class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int max = INT_MAX;
        for (int i =0; i<nums.size();i++){
            int find = abs(nums[i]);
            int currentMax = abs(max);
            
            if(find<currentMax){
                max = nums[i];
            }
            else if (find == currentMax && nums[i] > max){
                max = nums[i];
            }


        }
        return max;

        
    }
};