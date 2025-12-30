#include <iostream>
using namespace std;
int main() {

    //PATTERN 3
    // int n = 4;
    // for(int i =1 ; i<=n ; i++){
    //     for(int j =1; j<=n-i+1; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //PATTERN 4
    // int n=10;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;

    // }

    //PATTERN 5 
//     int n =4;
//     char ch = 'A';
//     for(int i= 1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//    }

     // PATTERN 6 hole rectungular patter

    //  int n= 4;
    //  for(int i =1;i<=4;i++){
    //     cout<<"*";
    //     for(int j=1;j<=n-1;j++){
    //         if(i==1 || i ==n){
    //             cout<<"*";
    //         }else{
    //             cout<<" ";
    //         }  
            
    //     }
    //     cout<<"*"<<endl;

    //  }

    //PATTERN 7 IBVERTED AND ROTATED HALF-PYRAMID

    // int n=4;
    // for(int i =1;i<=n;i++){
    //     //space 
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }

    //     //stars
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    //PATTERN 8 

    // int n =5;
    // int num = 1;
    // for(int i=1;i<=n;i++){
    //     for(int j =1;j<=i;j++){
    //         cout<<num<<"";
    //         num++;
            
    //     }
    //     cout<<endl;
    // }


    //PATTERN 9 diamond 
    //PART 1
//     int n=4;
//     for(int i =1;i<=n;i++){
//         //space
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }

//         //star
//         for(int j =1;j<=2*i-1;j++){
//             cout<<"*";
//         }

//         cout<<endl;
//     }

//     // part 2
//     for(int i=n;i>=1;i--){

//         //space
//         for(int j =1;j<=n-i;j++){
//             cout<<" ";
//         }

//         //star
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }



    // int n=10;
    // for(int i=1;i<=n;i++){

    //     //star
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }

    //     //space
    //     for(int j=1;j<=2*(n-i);j++){
    //         cout<<" ";

    //     }

    //     //star
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }

    //     cout<<endl;

    // }

    // for(int i=n;i>=1;i--){

    //     //star
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }

    //     //space
    //     for(int j=1;j<=2*(n-i);j++){
    //         cout<<" ";

    //     }

    //     //star
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }

    //     cout<<endl;

    // }


    //PRACTICE QUESTION 
    // Qyestion 1
    // int n = 5;
    // bool value =true;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<value;
    //         value =!value;
    //     }
    //     cout<<endl;
    // }



    //PRACTICE QUESTION 
    //Question 2

    // int n = 5;
    // int num =1;
    // for(int i=1;i<=n;i++){
    //     //space
    //     for(int j=1;j<=n-i;j++){
    //         cout<<num++;
    //     }
    //     //star
        
    //     cout<<"*****";
        
    //     cout<<endl;
    // }

    // pattern practice questin 3
    // int n=5;
    // for(int i =1;i<=n;i++){
    //     //space
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }

    //     //backward digit
    //     for(int j =i;j>=1;j--){
    //         cout<<j;
    //     }

    //     //forward digit
    //     for(int j= 2;j<=i;j++){
    //         cout<<j;
    //     }
        

    //     cout<<endl;
    // }






    return 0;

}    