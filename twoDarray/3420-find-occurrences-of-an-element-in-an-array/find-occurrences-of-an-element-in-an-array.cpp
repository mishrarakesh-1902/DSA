class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int count =0;
        vector<int> post;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                post.push_back(i);
                count++;
            }
            
        }
        vector<int> result;
        for(int i=0;i<queries.size();i++){
            if(queries[i] <= count){
                result.push_back(post[queries[i]-1]);                
            }
            else{
                result.push_back(-1);
            }
        }
        return result;
        
    }
};