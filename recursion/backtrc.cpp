// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// void printArr(int arr[] , int n){
//     for(int i=0; i<n ; i++){
//         cout<<arr[i]<<" ";       
//     }
//     cout<<endl;
// }

// void changeArr(int arr[] , int n, int i) {
//     if(i==n){
//         printArr(arr, n);
//         return ;
//     }
//     arr[i] = i+1;
//     changeArr(arr, n, i+1);
//     arr[i] -= 2;
        
// }

// int main() {
//     int arr[5] = {0};
//     int n =5;

//     changeArr(arr, n , 0);
//     printArr(arr, n);
//     return 0;
// }


// find total subset of given string

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// void printSubset(string str, string subset) {

//     if(str.size() == 0) {
//         cout << subset<<"\n";
//         return;

//     }
//     char ch = str[0];
//     //yes case
//     printSubset(str.substr(1, str.size()-1) , subset+ch);

//     //no case
//     printSubset(str.substr(1, str.size()-1) , subset);
// }




// int main(){
//     string str = "abc";
//     string subset = "";
    

//     printSubset(str,subset);
//     return 0;
// }


// permutations of sustring

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// void permutations(string str, string ans){
//     int n = str.size();
//     if(n==0){
//         cout<< ans <<"\n";
//         return;
//     }


//     for(int i=0; i<str.size(); i++){
//         char ch = str[i];
//         string nextStr = str.substr(0,i) + str.substr(i+1 , n-i-1);
//         permutations(nextStr , ans+ch);
//     }
// }



// int main (){
//     string str = "abc";
//     string ans = "";
//     permutations(str,ans);
    
//     return 0;
// }


// N Queen problem 
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// void printBoard(vector<vector<char>> board){
//     int n= board.size();

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<< board[i][j]<<" ";

//         }
//         cout << endl;
//     }
//     cout<<"----------------------------------------\n";
// }

// bool isSafe(vector<vector<char>> board, int row,int col){
//     int n = board.size();

//     //horizontal

//     for(int j=0;j<n;j++){
//         if(board[row][j] == 'Q'){
//             return false;
//         }
//     }

//     //vertical
//     for(int i =0;i<row;i++){
//         if(board[i][col] == 'Q'){
//             return false;
//         }
//     }

// // Digonal left

//     for(int i=row, j=col; i>=0&&j>=0; i--,j--){
//         if(board[i][j] == 'Q'){
//             return false ;
//         }
//     }

//     // Diagonal right 

//     for(int i=row, j=col; i>=0&&j<n; i--,j++){
//         if(board[i][j] == 'Q'){
//             return false ;
//         }
//     }
//     return true;


// }




// void nQueens(vector<vector<char>> board, int row){
//     int n= board.size();
//     if(row == n){
//         printBoard(board);
//         return;
//     }
//     for(int j=0; j<n;j++){
//         if(isSafe(board , row , j)) {
//             board[row][j] ='Q';
//             nQueens(board, row+1);
//             board[row][j] = '.';
//         }

//     }
// }

// int main (){
//     vector<vector<char>> board;
//     int n=4;

//     for(int i=0;i<n;i++){
//         vector<char> newRow;
//         for(int j=0; j<n; j++){
//             newRow.push_back('.');
//         }
//         board.push_back(newRow);
//     }

//     nQueens(board, 0);
//     // printBoard(board);
//     return 0;
// }



// grid ways

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// int gridWays(int r, int c, int n, int m) {
//     if(r==n-1 && c== m-1) {
//         return 1;
//     }

//     if(r >= n || c>=m) {
//         return 0;
//     }

//     //right
//     int val1 = gridWays(r, c+1, n, m);

//     //down
//     int val2 = gridWays(r+1, c, n, m);

//     return val1+val2;
// }

// int main(){
//     int n = 3;
//     int m =3;
//     cout<< gridWays(0,0,n,m);
//     return 0;
// }


//sudoku code 

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std; 

// void printSudoku(int sudoku[][9]) {
//     for(int i=0; i<9; i++){
//         for(int j=0; j<9; j++){
//             cout << sudoku[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// bool sudokuSolver(int sudoku[9][9], int row, int col){
//     if(row == 9){
//         printSudoku(sudoku);
//         return true;
//     }
//     int nextRow = row;
//     int nextCol = col+1;
//     if(col+1 == 9) {
//         nextRow = row+1;
//         nextCol = 0;
//     }

//     if(sudoku[row][col] != 0) {
//         return sudokuSolver(sudoku, nextRow, nextCol);
//     }

//     for(int digit=1; digit<=9; digit++) {
//         if(isSafe(sudoku, row, col, digit)) {
//             sudoku[row][col] = digit;
//             if(sudokuSolver(sudoku, nextRow, nextCol)){
//                 return true;
//             }
//             sudoku[row][col] =0;
//         }
//     }
//     return false;

// }



// int main() {
//     int sudoku[9][9] = {{0, 0, 8, 0,}}
    
//     return 0;
// }




#include <iostream>
#include <string>
#include <vector>
using namespace std;

int gridWays(int r, int c, int n, int m) {
    if(r==n-1 && c== m-1) {
        return 1;
    }

    if(r >= n || c>=m) {
        return 0;
    }

    //right
    int val1 = gridWays(r, c+1, n, m);

    //down
    int val2 = gridWays(r+1, c, n, m);

    return val1+val2;
}

int main(){
    int n = 3;
    int m =3;
    cout<< gridWays(0,0,n,m);
    return 0;
}
