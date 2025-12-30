// #include <iostream>
// using namespace std;

// int binarySearch(int *arr , int n , int key){
//     int st = 0, end=n-1;
   
//     while(st<=end){
//         int mid = (st+end)/2;
//         if(arr[mid] == key) {
//             return mid ;
//         }else if (arr[mid]<key){
//             st = mid+1;

//         }else {
//             end = mid-1;
//         }
//     }
//     return -1;
// }





// int main (){
//     int arr[] = {2,4,6,8,10,12,14,16};
//     int n =  sizeof(arr) /  sizeof(int) ;    

//     cout << binarySearch(arr , n, 12) << endl;
//     return 0;
// }




//print subarray

// #include <iostream>
// using namespace std;

// void printsubarray(int arr[] , int n){
//     for(int start =0; start < n; start++){
//         for(int end =start; end<n ; end++){

//             for(int i=start; i<=end; i++){
//                 cout << arr[i];
//             }
//             cout<<", ";
//         }
//         cout<< endl;

//     }
// }

// int main (){
//     int arr[] = {1,2,3,4,5};
//     int n = 5;

//     printsubarray(arr , n);


//     return 0;
// }


// maxmum sum of sub array ========================

// #include <iostream>
// using namespace std;


// void maxsumarray(int arr[], int n){
//     int maxSum = INT_MIN;
//     for(int start=0; start<n; start++){
//         for(int end=start; end<n; end++){
//             int maxsum=0;
//             for(int i=start ; i<=end; i++){
//                 maxsum = maxsum+arr[i];
//             }

//             cout<<maxsum<<",";
//             maxSum = max(maxSum , maxsum); //max can take the value of teo term and return us the maxSum 
//         }
//         cout<<endl;
//     }
//     cout<<"maxsum is equal to : "<<maxSum<<endl;
// }

//OPTIMIZE FORM================

// void maxsumarray2(int arr[], int n){
    // int maxSum = INT_MIN;
    // for(int start=0; start<n; start++){
    //     int maxsum=0;
    //     for(int end=start; end<n; end++){
    //         maxsum += arr[end];

            

            
    //         maxSum = max(maxSum , maxsum); //max can take the value of teo term and return us the maxSum 
    //     }
        
    // }
//     cout<<"maxsum is equal to : "<<maxSum<<endl;
// }


// void maxsumarray3 (int arr[] , int n){
//     int maxSum = INT_MIN ;
//     int currSum = 0;

//     for(int i=0;i<n ; i++){
//         currSum = currSum+arr[i];
//         maxSum = max(maxSum , currSum);
//         if(currSum<0){
//             currSum =0;
//         }
        
//     }
//     cout<<"maxsum is equal to : "<<maxSum<<endl;
// }

// int main(){ 
//     int arr[6] = {2, -3, 6, -5, 4, 2};
//     int n = sizeof(arr) /  sizeof(int) ;
    
//     maxsumarray3(arr,n);
    
//     return 0;

// }




// buy and sell stock ==================================================================

// #include <iostream>
// using namespace std;


// void buyandsell(int prices[] , int n){

//     int bestbuy[100000];
//     bestbuy[0] = INT_MAX;

//     for(int i =1;i<n;i++){
//         bestbuy[i] = min(bestbuy[i-1] , prices[i-1]);
//     }

//     int profit = 0;
//     for(int i = 0 ;i<n;i++){
//         int currprofit = prices[i]-bestbuy[i];
//         profit = max(profit , currprofit);

//     }

//     cout << "maxmum profit : " << profit <<endl;




// }


// int main(){

//     int prices[] = {7 , 1 ,5, 3, 6 , 4};
//     int n =  sizeof(prices) /  sizeof(int) ; 
    
//     buyandsell(prices , n);
    
    
    
    
//     return 0;
// }



// RAIN WATER TRAP ================================
#include <iostream>
using namespace std;

void trap(int height[] , int n) {
    int leftMax[20000];
    leftMax[0] = height[0];
    
    for(int i=1;i<n;i++){
        leftMax[i] = max(leftMax[i-1], height[i-1]);
        
    }

    int rightMax[20000];
    rightMax[n-1] = height[n-1];
    
    for(int i=n-2;i>=0;i--){
        rightMax[i] = max(rightMax[i+1],height[i+1]);
        
    }

    int waterTrapped = 0;
    for(int i=0; i<n; i++){
        int currwater = min(leftMax[i], rightMax[i]) - height[i];
        if(currwater>0){
            waterTrapped = waterTrapped+currwater;
        }

    }

    cout<<"water trapped= " << waterTrapped<<endl;
    
}

int main(){
    int height[6] = {4, 2, 0, 3, 2, 5 };
    int n = sizeof(height) / sizeof(int);


    trap(height,n);
    return 0;
}