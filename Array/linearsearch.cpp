// #include <iostream>
// using namespace std;

// // linear search of an array=====
// int linearSearch(int *arr, int n, int key) {
//     for(int i=0; i<n; i++) {
//         if(arr[i] == key) {
//             return i;
//         }
//     }

//     return -1;
// }
                                                                                                                           
// int main(){
//     int arr[] = {2,4,6,8,10,12,14,16};
//     int n = sizeof(arr) / sizeof(int);

//     cout<< linearSearch(arr, n, 10) << endl;




//     return 0;
// }



//REVERSE AN ARRAY ===================================

#include <iostream>
using namespace std;


void printarr(int *arr, int n ){
    for(int i=0; i<n; i++) {
        cout << arr[i] << ",";
    }
    cout <<endl;
}

int main() {
    int arr[] = {2,4,3,9,2};
    int n =  sizeof(arr) /  sizeof(int) ;

    //for copthe elemt of original array starting from last to copyarr starting from first 

    // int copyArr[n];
    // for(int i = 0 ; i<n; i++){
    //     int j = n-i-1;
    //     copyArr[i] = arr[j];
    // }


    // for copyArr to  original

    // for(int i =0; i<n; i++){
    //     arr[i] = copyArr[i];
    // }

// by use of swap where less space cpmlexity (no use of extra space )=====================================
    // int start =0;
    // int end = n-1;

    // while(start<end) {
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    // }



    printarr(arr,n);

    return 0;

}












