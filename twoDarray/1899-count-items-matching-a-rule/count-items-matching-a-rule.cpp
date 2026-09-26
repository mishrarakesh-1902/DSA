class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int idx;
        if(ruleKey.compare("type")==0){
            idx = 0;
        }
        else if(ruleKey.compare("color")==0){
            idx = 1;
        }
        else{
            idx =2;
        }
        int count =0;
        for(int i =0; i<items.size(); i++){
            if(items[i][idx]== ruleValue){
                count++;
            }
        }
        return count;
        
    }
};