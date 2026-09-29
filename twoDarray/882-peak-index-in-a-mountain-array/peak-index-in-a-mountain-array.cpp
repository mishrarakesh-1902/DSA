class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int start =0;
        int end = arr.size()-1;
        int result;
        while(start<end){
            if(arr[start]<=arr[end]){
                start++;;
                result=end;
            }
            else if(arr[start]>=arr[end]){
                end--;
                result =start;
            }
            // else{
            //     if(arr[start] >result){
            //         result = start;
            //     }
            //     start++;
            //     end--;
            // }
        }
        return result;
        
    }
};