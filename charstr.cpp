// //CONVERT TO UPPERCASE

// #include <iostream>
// #include <cstring>
// using namespace std;

// void upperCase(char word[] , int n){
//     for(int i=0; i<n; i++){
//         char ch = word[i];
//         if(ch>='A' && ch<='Z'){
//             continue;
//         }else{
//             word[i] = ch -'a' + 'A';
//         }
//     }
// }


// int main (){
//     char word[] = "jgjhdsbdhchdb";
//     upperCase(word, strlen(word));
//     cout<<word<<endl;
    
//     return 0;
// }


// conver upper to lower case 

//CONVERT TO UPPERCASE

// #include <iostream>
// #include <cstring>
// using namespace std;

// void lowerCase(char word[] , int n){
//     for(int i=0; i<n; i++){
//         char ch = word[i];
//         if(ch>='a' && ch<='z'){
//             continue;
//         }else{
//             word[i] = ch -'A' + 'a';
//         }
//     }
// }


// int main (){
//     char word[] = "aPPLE";
//     lowerCase(word, strlen(word));
//     cout<<word<<endl;
    
//     return 0;
// }


// REVERSED A CHAR ARRAY 

// #include <iostream>
// #include <cstring>
// using namespace std;

// void reverse(char word[], int n){
//     int st =0;
//     int end =n-1;
//     while(st<end){
//         swap(word[st] , word[end]);
//         st++;
//         end--;
//     }
// }


// int main(){
//     char word[] = "abcd";

//     reverse(word , strlen(word));
//     cout<<word<<endl;
//     return 0;
// }


//VALID PALINDROME

// #include <iostream>
// #include <cstring>
// using namespace std;

// bool isPalindrome(char word[] , int n){
//     int st =0;
//     int end =n-1;
//     while(st<end){
//         if(word[st++] != word[end--]){
//             cout<<"invalid"<<endl;
//             return false;
//         }
//     }
//     cout<<"valid"<<endl;
//     return true;
// }


// int main(){
//     char word[] ="abcbae";
//     isPalindrome(word , strlen(word));
    
//     return 0;
// }



//anagram string 

// #include <iostream>
// #include <cstring>
// using namespace std;

// bool isAnagram(string str1 , string str2){
//     if(str1.length() != str2.length()){
//         cout<<"not valid"<<endl;
//         return false;
//     }

//     int count[26] ={0};
//     for(int i=0; i<str1.length(); i++){
//         int idx = str1[i]-'a';
//         count[idx]++;
//     }


//     for(int i=0; i< str2.length(); i++){
//         int idx= str2[i]-'a';
//         if(count[idx] == 0){
//             cout<<"not valid"<<endl;
//             return false;
//         }
//         count[idx]--;
//     }
//     cout<<"valid"<<endl;
//     return true;
// }



// int main(){
//     string str1 = {"string"};
//     string str2 = {"tsirgn"};

//     isAnagram(str1 , str2);

//     return 0;
// }






//question 2
#include <iostream>
#include <cstring>
using namespace std;

bool areAlmostEqual(string s1 , string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    char diffChar1 , diffChar2;
    int diff = 0;
    for(int i=0; i<s1.length(); i++){
        if(s1[i] != s2[i]) {
            if(diff == 0) {
                diffChar1 = s1[i];
                diffChar2 = s2[i];
            }else{
                if(s1[i]!=diffChar2||s2[i]!=diffChar1){
                    return false;
                }
            }
            diff++;
        }
        if(diff>2){
            return false;
        }
    }
    if(diff == 1){
        return false;
    }
    return true;
}


int main() {
    string s1 = "bank";
    string s2 = "kanb";

    bool result = areAlmostEqual(s1, s2);
    cout << (result ? "true" : "false") << endl;

    return 0;
}