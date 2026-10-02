class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;
        int mid = start + (end - start) / 2;
        while(start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
        
    }
};