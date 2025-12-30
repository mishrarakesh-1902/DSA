//merge sort
// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(int arr[], int si, int mid, int ei){
//     vector<int> temp;
//     int i=si;
//     int j=mid+1;

//     while(i <= mid && j <= ei){
//         if(arr[i] <= arr[j]){
//             temp.push_back(arr[i++]);
//         }else{
//             temp.push_back(arr[j++]);
//         }
//     }
//     while(i <= mid){
//         temp.push_back(arr[i++]);
//     }
//     while(j <= ei){
//         temp.push_back(arr[j++]);
//     }

//     // vector => org arr
//     for(int idx=si , x=0; idx<=ei ;idx++){
//         arr[idx] = temp[x++];
//     }
// }


// void mergesort(int arr[], int si, int ei){
//     if(si >= ei){
//         return;
//     }
//     int mid = si + (ei-si)/2 ;
//     mergesort(arr , si ,mid);
//     mergesort(arr, mid+1, ei);

//     merge(arr , si , mid, ei);

// }

// void printarr(int arr[] , int n) {
//     for(int i =0; i<n; i++){
//         cout << arr[i] <<" ";
//     }
//     cout << endl;
// }

// int main(){

//     int arr[6] = {6,3,7,5,2,4};
//     int n = 6;
//     mergesort(arr , 0 ,n-1);
//     printarr(arr , n);

//     return 0;
// }


// quick sort

#include <iostream>
#include <vector>
using namespace std;


void printarr(int arr[] , int n) {
    for(int i =0; i<n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int partition(int arr[], int si, int ei) {
    int i = si-1;
    int pivot = arr[ei];

    for(int j=si; j<ei; j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(arr[i] , arr[j]);
        }
    }
    i++;
    swap(arr[i] , arr[ei]);

    //pivotIdx
    return i;
}

void quicksort(int arr[] , int si , int ei){
    if(si >= ei) {
        return;
    }
    int pivotidx = partition(arr, si , ei);

    quicksort(arr, si, pivotidx-1);
    quicksort(arr, pivotidx+1, ei);
}

int main(){
    
    
    int arr[6] = {6,3,7,5,2,4};
    int n = 6;

    quicksort(arr, 0 , n-1);
    printarr(arr ,n);

    return 0;
}