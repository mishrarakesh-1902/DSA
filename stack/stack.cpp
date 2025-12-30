// #include <iostream>
// #include <vector>
// using namespace std;

// //create stack using vector 
// template<class T> // this help to chose data type 
// class Stack{
//     vector<T> vec;
// public:
//     void push(T val){
//         vec.push_back(val);
//     }
//     void pop(){

//         vec.pop_back();
//     }
//     T top(){
//         int lastIdx = vec.size()-1;
//         return vec[lastIdx];
//     } 
    
//     bool isEmpty() {
//         return vec.size() == 0;
//     }
// };


// int main(){

//     Stack<int> s;

//     s.push(3);
//     s.push(2);
//     s.push(1);
//     s.push('c');
//     s.push('b');
//     s.push('a');
//     while(!s.isEmpty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout <<endl;
//     return 0;
// }


// STACK  USING LL


// #include <iostream>
// #include <vector>
// #include <list>
// using namespace std;

// //create stack using LL  (by stl class)
// template<class T>
// class Stack {
//     list<T> ll;
// public:
//     void push(T val){
//         ll.push_front(val);
//     }    
//     void pop(){
//         ll.pop_front();
//     }
//     T top(){
//         return ll.front();
//     }
//     bool isEmpty(){
//         return ll.size()==0;
//     }
// };

// int main(){

//     Stack<int> s;

//     s.push(3);
//     s.push(2);
//     s.push(1);
    
//     while(!s.isEmpty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout <<endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <list>
// using namespace std;

// //create stack using LL  (without stl class)
// template<class T>
// class Node {
//     T data;
//     Node* next;
// public:
//     Node*(T val){
//         data = val;
//         next = NULL;
//     }    
// };


// template<class T>
// class Stack {
//     list<T> ll;
// public:
//     void push(T val){
//         //IMPLEMENT THE PROPER PUSH_FRONT CODE INSTED OF STL USE

//         ll.push_front(val);
//     }    
//     void pop(){
//         //IMPLEMENT THE PROPER POP_FRONT CODE INSTED OF STL USE

//         ll.pop_front();
//     }
//     T top(){
//         return ll.front();
//     }
//     bool isEmpty(){
//         return ll.size()==0;
//     }
// };

// int main(){

//     Stack<int> s;

//     s.push(3);
//     s.push(2);
//     s.push(1);
    
//     while(!s.isEmpty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout <<endl;
//     return 0;
// }



//USING STL

// #include <iostream>
// #include <vector>
// #include <list>
// #include <stack>
// using namespace std;

// //create stack using LL  (without stl class)
// template<class T>
// class Node {
//     T data;
//     Node* next;
// public:
//     Node*(T val){
//         data = val;
//         next = NULL;
//     }    
// };


// template<class T>
// class Stack {
//     list<T> ll;
// public:
//     void push(T val){
//         //IMPLEMENT THE PROPER PUSH_FRONT CODE INSTED OF STL USE

//         ll.push_front(val);
//     }    
//     void pop(){
//         //IMPLEMENT THE PROPER POP_FRONT CODE INSTED OF STL USE

//         ll.pop_front();
//     }
//     T top(){
//         return ll.front();
//     }
//     bool isEmpty(){
//         return ll.size()==0;
//     }
// };

// int main(){
// // using stl stack
//     stack<int> s;

//     s.push(3);
//     s.push(2);
//     s.push(1);
    
//     while(!s.empty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout <<endl;
//     return 0;
// }



#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;

void pushBottom(stack<int> &s, int val){
    if(s.empty()) {
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    pushBottom(s, val);
    s.push(temp);
}

string reverseString(string str) {
    string ans;
    stack<char> s;
    
    for(int i=0; i<str.size(); i++){
        s.push(str[i]);
    }

    while(!s.empty()){
        char top = s.top();
        ans += top;
        s.pop();

    }

    return ans;

}


void reverse(stack<int> &s) {
    if(s.empty()) {
        return;
    }

    int temp = s.top();
    s.pop();
    reverse(s);
    pushBottom(s, temp);
}

void printStack(stack<int> s) {
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << "\n";
}


int main(){

    // stack<int> s;
    // s.push(3);
    // s.push(2);
    // s.push(1);
    // pushBottom(s, 4);
    // while(!s.empty()){
    //     cout<<s.top() << " ";
    //     s.pop();
    // }
    // cout << endl;
    // return 0;

    // string str = "abcd";
    // cout << "reverse =" << reverseString(str) << endl;
    // return 0;

    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);
    printStack(s);
    reverse(s);
    printStack(s);
    return 0;


}