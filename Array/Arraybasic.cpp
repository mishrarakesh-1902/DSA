#include <iostream>
using namespace std;

// int main(){
    // int marks[5] = {1,2,3,4,5};
    // int n = sizeof(marks) / sizeof(int);
    // cout << sizeof(marks) / sizeof(int) << endl;

    // for print the array indise item using loop
    // output for array value 

    // int arr[5] = {7,5,2,1,3};
    // int length = sizeof(arr) / sizeof(int);

    // for(int i=0; i<=length-1; i++){
    //     cout << arr[i] << " "; // idx = 0,1,2,3,4....
    // }

    //input for array value

    // int arr[5];
    // int length = sizeof(arr) / sizeof(int);

    // taking the input of size of array also
    // int length ;
    // cout << "enter length of array : ";
    // cin >> length;

    // int arr[length];


    // for(int i=0; i<=length-1; i++){
    //     cin>> arr[i]; // idx = 0,1,2,3,4....
    // }


    // for(int i=0; i<=length-1; i++){
    //     cout << arr[i] << ","; // idx = 0,1,2,3,4....
    // }
    // cout << endl;


    // find largest of an array ====================================

    //  int arr[] = {5,4,3,9,12};
    //  int n = sizeof(arr) / sizeof(int);

    //  int max = arr[0];
    //  int min = arr[0];
    //  for(int i =0;i<=n-1;i++){
    //     if(arr[i]>max){
    //         max = arr[i];
    //         cout << "assigning value " << arr[i] <<" to max\n";
    //     }
    //     if(arr[i] <min){
    //         min = arr[i];
    //     }
    //  }

    //  cout << "max =" << max << endl;
    //  cout << "min =" << min << endl;

    // Array by referance

void printArr(int arr[]) {
    int n = sizeof(arr) / sizeof(int);

    for(int i=0; i<n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}


int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);

    printArr(arr);

    return 0;

} 