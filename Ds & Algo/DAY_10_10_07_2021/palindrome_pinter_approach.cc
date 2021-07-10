#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    bool alpanumeric(char c){
        if(c>=97 && c<=122 || c>=48 && c<=57)
            return true;    
     return false;
}

    bool isPalindrome(string s) {
        string result="";
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int l=0;
        int r= s.size()-1;
        string temp=s;
        cout<<s<<endl;
        while(l<=r){
            if(alpanumeric(s[l]))
                if(alpanumeric(s[r]))
                    if(s[l]==s[r])
                        swap(s[l],s[r]);
                        l++;
                        r--;
                    else{
                        return false;}
                else{
                    r--;}
            
            else
                l++;
        }
        if(temp==s){
            return true;
        }
        else {
            return false;
        }
    }
int main(){
    string s="a_a";
    cout<<isPalindrome(s);
}