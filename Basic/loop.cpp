#include <iostream>
using namespace std;
int main() {
    // Looping in C++
    // print apna college 5 times
    // for(int num=1; num<=5; num++) {
    //     cout << "apna college " << endl;;
    // }



    // print apna college n times using loop
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // for(int num=1; num<=n; num++) {
    //     cout << "apna college " <<endl;
    // }



    // sum of first n natural number
    // int n;
    // int sum =0;
    // cout << "Enter a number:";
    // cin >> n;
    // for (int num=1; num<=n; num++) {
    //     sum += num;
        
    // }
    // cout << "sum of first natural number: "<<sum<<endl;


    // while loop
    // int num = 1;
    // while (num <= 5) {       
    //     cout << "apna college " << endl;
    //     num++;
    // }


    // print pattern
    // int i;
    // int j;
    // for(i=0; i<=3; i++){
    //     cout<<"****"<<endl;
    // }


    //print number n to 1

    // int i;
    // for(i=100; i>0; i--){
    //     cout<<i<<endl;
    // }

    // sum of the digit using while loop

    // int n = 10829;
    // int sum = 0;
    // while(n>0){
    //     int lastdigit= n%10;
    //     sum = lastdigit+sum;
    //     n = n/10;    
    // }
    // cout<<"sum of digit:"<<sum<<endl; 




    // print the sum of add digit of a number using while loop
    // int n = 10829;
    // int sum = 0;
    //  while (n>0){
    //     int lastdigit = n%10;
    //     if(lastdigit%2 != 0){
    //         sum = lastdigit+sum;
    //     }
        
    //     n = n/10;
    //  }
    //  cout<<"sum of odd digit:" << sum<<endl;
    // reverse a number and print the result 

    // int n = 12345;
    // int res = 0;

    // while(n>0) {
    //     int lastDig = n % 10;
    //     res = res*10 + lastDig;
    //     n = n/10;
    // }
    // cout<<"reverse"<<res<<endl;

    //DO while loop 
    // int val = 1;
    // do{
    //     cout<< "apna college in do-while loop" << endl;
    // } while(val>5);

    // while(val >5) {
    //     cout << "apna college in while loop";
    // }
   
 // wap to take the input from user untill he/she enter the multple of 10 as a number
    //  int n ;

    //  do{
    //     cout<<"enter a number:";
    //     cin>>n;
    //     if(n%10==0){
    //         break;
    //     }
    //     cout << "you entered" << n << endl;
    //  } while(true);


     // wap to print all no. except multiple of 10
    //  int n ;

    //  do{
    //     cout<<"enter a number:";
    //     cin>>n;
    //     if(n%10==0){
    //         continue;
    //     }
    //     cout << "you entered" << n << endl;
    //  } while(true);




    // cheack the number is prime or not 
    int n =5;
    bool isPrime = true;
    for(int i=2; i<=n-1 ; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout<<"number is prime" << endl;
    } else {
        cout<<"number is not prime" << endl;
    }
    return 0;


   
}