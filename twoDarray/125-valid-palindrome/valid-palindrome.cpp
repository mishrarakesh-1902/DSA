class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> n;
        for(int i=0;i<s.size();i++){
            if(!isalnum(s[i])){
                continue;
            }
            n.push_back(s[i]);
        }

        int start=0;
        int end = n.size()-1;
        int mid = start + (end - start) / 2;
        
        for (int i = 0; i < n.size(); i++) {
            n[i] = tolower(n[i]);
        }



        while(start<=end){
            if(n[start]!=n[end]){
                return false;
            }
            else{
                start++;
                end--;
            }
            
            
        }
        return true;
        
        
    }
};