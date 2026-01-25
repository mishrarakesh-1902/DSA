//WATERMELON QUESTION

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<(n%2==0 && n>2 ? "YES" : "NO")<<endl;
    return 0;
}


//71A - Way Too Long Words

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        if(s.size()>10){
            cout<<s[0] << s.size()-2 << s.back() <<endl;
            
        }
        else cout<<s<<endl;
    }
}