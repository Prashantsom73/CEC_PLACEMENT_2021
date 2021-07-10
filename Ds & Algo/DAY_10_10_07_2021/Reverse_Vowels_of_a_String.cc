#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool vowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            return true;    
     return false;
}
  string reverseVowels(string s) {

        int l=0;
        int r= s.size()-1;

        while(l<=r){
            if(vowel(s[l])&& vowel(s[r])){
                swap(s[l],s[r]);
                l++;
                r--;
            }
            else if(vowel(s[l]) && !vowel(s[r])){
                r--;
            }
            else{
                l++;
            }
        }
        return s;
    }
int main(){
    string s="hello";
    cout<<reverseVowels(s);
}