// #include <iostream>
// using namespace std;

// // int factorial(int n){
// //     if(n==0) {
// //         return 1;
// //     }

// //     return n* factorial(n-1);
// // }

// // int main(){
// //     int ans = factorial(5);
// //     cout<< ans << endl;
// //     return 0;
// // }

// // void print(int n){
// //     if(n==0){
// //         return;
// //     }
// //     cout<<n<<" ";
// //     print(n-1);
// // }

// // int main(){
// //     print(5);
// //     return 0;
// // }



// //sorted array 
// // bool isSorted(int arr[] , int n, int i){
// //     if(i==n-1){
// //         return true;

// //     }
// //     if(arr[i] > arr[i+1]){
// //         return false;
// //     }
// //     return isSorted(arr,n,i+1);

// // }

// // int main(){
// //     int arr1[5] = {1,2,3,4,5};
// //     int arr2[5] = {1,2,4,3,5};

// //     cout<<isSorted(arr2,5,0);
// //     return 0;
// // }


// //first occurance
// // #include <vector>

// // int firstOccur(vector<int> arr, int i, int target){
// //     if(i == arr.size()) {
// //         return -1;
// //     }

// //     if(arr[i] == target){
// //         return i;
// //     }
// //     return firstOccur(arr, i+1, target);

// // }

// // int main(){
// //     vector<int> arr = {1,2,6,3,3,3,4};
// //     cout<< firstOccur(arr, 0, 30) << endl;
// //     return 0;
// // }

// //last occur
// #include <vector>

// // int lastOccur(vector<int> arr, int target,int i){
// //     if(i == arr.size()) {
// //         return -1;
// //     }
// //     int idxFound = lastOccur(arr, target, i+1);
// //     if(idxFound == -1 && arr[i] == target){
// //         return i;
// //     }
// //     return idxFound;

// // }

// // int main(){
// //     vector<int> arr = {1,2,3,3,3,4};
// //     cout<< lastOccur(arr,3, 0) << endl;
// //     return 0;
// // }


// // X TO THE POWER N

// int pow(int x, int n){
//     if(n ==0){
//         return 1;

//     }
//     int halfpow = pow(x , n/2);
//     int halfpowSquare = halfpow*halfpow;

//     if(n % 2 != 0) {
//         return x * halfpowSquare;
//     }
//     return halfpowSquare;
// }

// int main() {
//     cout << pow(2, 10) << endl;
//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int tilingProblem(int n){ //2xn

//     if(n== 0 || n== 1){
//         return 1;
//     }


//     //vertical
//     int ans1 = tilingProblem(n-1);


//     //horizontal
//     int ans2 = tilingProblem(n-2);


//     return ans1 + ans2;

// }

// int main(){
//     int n =3;
//     cout<< tilingProblem(7) << endl;
// }


//remove dublicates

// #include <iostream>
// #include <string>
// using namespace std;

// void removeDuplicates(string str, string ans, int i,int map[26]) {
//     if(i == str.size()) {
//         cout << "ans : " << ans << endl;
//         return;
//     }
//     char ch = str[i];
//     int mapIdx = (int)(ch - 'a');

//     if(map[mapIdx]) {
//         removeDuplicates(str , ans , i+1 ,map);
//     } else {
//         map[mapIdx] = true;
//         removeDuplicates(str, ans+str[i], i+1, map);
//     }
// }
// int main(){
//     string str = "apnacollege";
//     string ans = "";
//     int map[26] = {false};

//     removeDuplicates(str, ans, 0, map);
//     return 0;
// }


// friends pairing pair 

// #include <iostream>
// #include <string>
// using namespace std;

// int friendsParing(int n){
//     if(n==1 || n ==2){
//         return n;
//     }
//     return friendsParing(n-1) + (n-1)*friendsParing(n-2);
// }

// int main(){
//     cout<< friendsParing(4) <<endl;
    
//     return 0;
// }


// BINARY STRING PROBLEM 

// #include <iostream>
// #include <string>
// using namespace std;

// void binString(int n, int lastplace , string ans){
//     if(n==0){
//         cout<<ans<<endl;
//         return;
//     }
//     if(lastplace != 1){
//         binString(n-1, 0, ans+'0');
//         binString(n-1, 1, ans+'1');
//     } else{
//         binString(n-1, 0, ans+'0');
//     }
// }
// int main(){
//     string ans = "";
//     binString(3,0,ans);
//     return 0;
// }


//question 3

// #include <iostream>
// #include <string>
// using namespace std;

// int countSubstrings(string s , int i , int j, int n) {
//     if(n==1){
//         return 1;
//     }
//     if(n<=0){
//         return 0;
//     }

//     int res = countSubstrings(s , i+1 , j, n-1) + countSubstrings(s , i , j-1 , n-1) - countSubstrings(s , i+1 , j-1 , n-2);

//     if(s[i] == s[j]){
//         res++;
//     }

//     return res;

    
// }

// int main() {
//     string S1 = "abcab";
   
//     cout << "Input: " << S1 << "\nOutput: " << countSubstrings(S1,0,S1.length()-1, S1.length() ) << endl;

//     string S2 = "aba";
    
//     cout << "Input: " << S2 << "\nOutput: " << countSubstrings(S2, 0 , S2.length()-1 , S2.length()) << endl;

//     return 0;
// }


// tower of henoi 

// #include <iostream>
// #include <string>
// using namespace std;

// void towerofhenoi(int n , string start , string helper , string destin){
//     if(n == 1){
//         cout<<"transferdisk"<<n<<"from"<< start <<"to"<< destin <<endl;
//         return;
//     }
//     towerofhenoi(n-1 , start , destin , helper );
//     cout<<"transferdisk"<<n<<"from"<<start<<"to"<<destin<<endl;
//     towerofhenoi(n-1 , helper , start , destin);

// }

// int main() {
//     int n = 1;
//     towerofhenoi (3,"A","B","C") ;

//     return 0;
// }


// DIVIDE & CONQUER

// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(vector<string>& arr, int si, int mid, int ei) {
//     vector<string> temp;
//     int i = si;
//     int j = mid + 1;

//     while (i <= mid && j <= ei) {
//         if (arr[i] <= arr[j]) {
//             temp.push_back(arr[i++]);
//         } else {
//             temp.push_back(arr[j++]);
//         }
//     }
//     while (i <= mid) {
//         temp.push_back(arr[i++]);
//     }
//     while (j <= ei) {
//         temp.push_back(arr[j++]);
//     }

//     // Copy back to original array
//     for (int idx = si, x = 0; idx <= ei; idx++) {
//         arr[idx] = temp[x++];
//     }
// }

// void mergeSort(vector<string>& arr, int si, int ei) {
//     if (si >= ei) {
//         return;
//     }
//     int mid = si + (ei - si) / 2;
//     mergeSort(arr, si, mid);
//     mergeSort(arr, mid + 1, ei);
//     merge(arr, si, mid, ei);
// }

// void printArr(vector<string>& arr) {
//     for (auto& s : arr) {
//         cout << s << " ";
//     }
//     cout << endl;
// }

// int main() {
//     vector<string> arr = {"sun", "earth", "mars", "mercury"};

//     cout << "Original Array: ";
//     printArr(arr);

//     mergeSort(arr, 0, arr.size() - 1);

//     cout << "Sorted Array: ";
//     printArr(arr);

//     return 0;
// }

// majority element 

// #include <iostream>
// #include <vector>
// using namespace std;

// void majorityElement(int arr[] , int n){
//     double count =0;
//     for(int i =0; i<n ;i++){
//         for(int j=i+1; j<n;j++){
//             if(arr[i] > arr[j]){
//                 count = count +0.5;
//             }
//         }
//     }
//     return count;

    

// }