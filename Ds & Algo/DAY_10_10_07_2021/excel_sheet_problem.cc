#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string convertToTitle(int n) {
    string result="";
    int temp;  
    while(n>0){
       char c='A'+(n-1)%26;
       result=c+result;
       n=(n-1)/26;
    }
    return result;
}
int main(){
    cout<<convertToTitle(701);
}