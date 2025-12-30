// #include <iostream>
// using namespace std;

// int diagonalSum(int mat[][4] , int n) {
//     int sum =0;

//     //time comp. = on^2
//     // for(int i=0; i<n; i++){
//     //     for(int j=0; j<n; j++){
//     //         if(i==j){
//     //             sum += mat[i][j];
//     //         }else if(j == n-i-1) {
//     //             sum += mat[i][j];
//     //         }
//     //     }
//     // }

// /////time comp. = o(n)
//     for(int i =0;i<n;i++){
//         sum += mat[i][i];
//         if(i != n-i-1) {
//             sum += mat[i][n-i-1];
//         }
//     }

//     cout<<"sum is equal to :" <<sum <<endl;
//     return sum;
// }


// int main(){
//     int matrix[4][4] = {{1,2,3,4},
//                         {5,6,7,8},
//                         {9,10,11,12},
//                         {13,14,15,16}};

//     diagonalSum(matrix , 4);

//     return 0;

// }



// search in a sorted matrix 

// #include <iostream>
// using namespace std;


// bool search(int mat[][4] , int n, int  m ,int key){
//     int i =0 , j = m-1;
//     while(i<n && j>=0){
//         if(mat[i][j] == key){
//             cout<<"found at cell("<<i<<","<<j<<")\n";
//             return true;
//         }else if(mat[i][j]>key){
//             //left
//             j--;
//         }else{
//             //down
//             i++;
//         }
//     }
//     cout<<"key not found"<<endl;
//     return false;
// }



// int main(){
//     int matrix[4][4] = {{1,2,3,4},
//                         {5,6,7,8},
//                         {9,10,11,12},
//                         {13,14,15,16}};

    
//     search(matrix,4,4, 3);


//     return 0;

// }



// #include <iostream>
// using namespace std;

// void search(int arr[][3] , int m , int n, int key){
    
//     int count =0;
//     for(int i=0; i<m;i++){
//         for(int j=0; j<n;j++){
//             if(arr[i][j] ==key){
//                 count = count +1;
//             }
//         }
//     }
//     cout<<"count is : "<<count;
// }


// int main (){

//     int matrix[2][3]= {{4,7,8},{7,8,7}};

//     search(matrix , 2, 3 ,7);

//     return 0;

// }


// #include <iostream>
// using namespace std;


// void sumarr(int arr[][3] , int m , int n ){
//     int sum =0;
//     int i =1;
//     for(int j=0; j<n ;j++){
//         sum = sum +arr[i][j];
//     }
//     cout<<"sum is equal to :"<<sum;
// }


// int main(){

//     int matrix[3][3] = {{1,4,9},{11,4,31},{2,2,3}};

//     sumarr(matrix ,3,3);

//     return 0;
// }




#include <iostream>
using namespace std;


void transposearr(int arr[2][3] ,int m, int n ){
    int matrixx[3][2];
    for(int i =0; i<m;i++){
        for(int j=0; j<n; j++){
            matrixx[j][i] = arr[i][j];
        }
    }
    
    for(int i =0; i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrixx[i][j]<<" ";
        }
        cout<<endl;
    }

}


int main (){

    int matrix[2][3] = {{1,2,3} , {4,5,6}};

    transposearr(matrix ,2,3);

    return 0;
}



