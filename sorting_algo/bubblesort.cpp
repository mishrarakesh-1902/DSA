// #include <iostream>
// using namespace std;

// void print(int arr[], int n){
//     for (int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void bubblesort(int arr[], int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j] , arr[j+1]);
//             }
//         }
//     }
//     print(arr,n);
// }

// int main(){
//     int arr[] = {5,4,1,3,2};
//     int n = sizeof(arr) / sizeof(int);

//     bubblesort(arr,n);

//     return 0;
// }



//optimize form 

#include <iostream>
using namespace std;

void print(int arr[], int n){
    for (int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int arr[], int n){
    bool isSwap = false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
                isSwap = true;
            }
        }

        if(!isSwap){
            // this means array is already sorted
            return;
        }
    }
    print(arr,n);
}

int main(){
    int arr[] = {5,4,1,3,2};
    int n = sizeof(arr) / sizeof(int);

    bubblesort(arr,n);

    return 0;
}