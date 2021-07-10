#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    bool isPalindrome(string s) {
        string result="";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(auto i : s){
            if(i>=97 && i <=122){
                result+=i;
            }
            else if(i>=48 && i<=57){
                result+=i;
            }
        }
        string temp=result;
        cout<<result;
        reverse(result.begin(),result.end());
        if(temp == result){
            return true;
        }
        else{
            return false;
        }
    }
int main(){
    string s="9,8";
    cout<<isPalindrome(s);
}