
// //WriteafunctiontocheckifanumberisapalindromeinC++
// #include <iostream>
// using namespace std;


// bool palidromno(int n ){
//         int original  = n;
//         int res = 0;
//         while(n>0){
//             int lastdigit = n%10;
//             res = res*10 + lastdigit;
//             n = n/10;
//         }
//         return original == res;       
// }



// int main() {
//     int num ;
//     cout<<"enter a number";
//     cin>>num;

//     if(palidromno(num)){
//         cout<<num<<"  number is a palidrom";
//     }else{
//         cout<<"not palidrom";
//     }
    

//     return 0;
// }    



//Writeafunctiontocalculatethesumofdigitsofanumber.
// #include <iostream>
// using namespace std;

// void sumdigit(int n){
//     int sum =0;
//     while(n>0){
//         int lastdigit = n%10;
//         sum = sum+lastdigit;
//         n=n/10;
//     }
//     cout<< sum;
// }

// int main() {
//     int num;
//     cout<<"enter a number";
//     cin>>num;
//     sumdigit(num);

    
    
//     return 0;
// }




//Write  a function which takes 2 numbers as parameters(a&b)andoutputs:a^2+b^2+2*ab.

// #include <iostream>
// using namespace std;

// void calculation (int n , int m){
//     int result1;
    
    
//     result1 = (n*n) + (m*m) + (2*n*m);
        
        

//     cout<<result1;
// }

// int main(){

//     int num1;
//     int num2;
//     cout<<"Enter the two number";
//     cin>>num1;
//     cout<<"Enter second number";
//     cin>>num2;

//     calculation(num1 , num2);
   

//     return 0;

// }


// Writeafunctionthatprintsthelargestof3numbers

// #include <iostream>
// using namespace std;


// void findlasrgest(int a, int b, int c){
//     if(a>b && a>c){
//         cout<<"a is lastest";
//     }else if (b>c && b>a){
//         cout<<"b is gretest";
//     }else if (c>a && c>b){
//         cout<<"c is largest";
//     }else{
//         cout<<"two number is same";
//     }

// }


// int main (){
//     int num1;
//     int num2;
//     int num3;

//     cout<<"enter number 1";
//     cin>>num1;

//     cout<<"enter second number";
//     cin>>num2;

//     cout<<"enter third number";
//     cin>>num3;

//     findlasrgest(num1 , num2, num3);

    
//     return 0;

// }



// Writeafunctionthatacceptsacharacter(ch)asparameters&returnsthecharacterthatoccursafterchintheEnglishalphabet.Eg:input=‘c’,returnvalue=‘d’
#include <iostream>
using namespace std;


void character(char ch){
    

}

int main (){
    
    
    
    return 0;
}