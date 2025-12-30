// #include <iostream>
// using namespace std;

// void print(int arr[], int n){
//     for (int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void selectionsort(int arr[] , int n){
//     for(int i=0;i<n-1;i++){
//         int minIdx=i;
//         for(int j=i+1; j<n; j++){
//             if(arr[j] < arr[minIdx]){
//                 minIdx =j;
//             }
//         }
//         swap(arr[i], arr[minIdx]);
//     }

//     print(arr , n);
    
    
// }


// int main(){
//     int arr[] = {5,4,1,3,2};
//     int n = sizeof(arr) / sizeof(int);

//     selectionsort(arr,n);

//     return 0;
// }


//insertion sort ===============================

#include <iostream>
using namespace std;

void print(int arr[], int n){
    for (int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionsort(int arr[] , int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev] > curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }

    print(arr , n);
}



int main(){
    int arr[] = {5,4,1,3,2};
    int n = sizeof(arr) / sizeof(int);

    insertionsort(arr,n);

    return 0;
}