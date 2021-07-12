#include<bits/stdc++.h>
using namespace std;
string reverseOnlyLetters(string s){
    int l=0;
    int r= s.size()-1;
    while(l<=r){
        if(isalpha(s[l]) && isalpha(s[r])){
            swap(s[l],s[r]);
            l++;r--;
        }
        else if(isalpha(s[l]) && !isalpha(s[r])){
            l++;
        }
        else if(!isalpha(s[l]) && isalpha(s[r])){
            r--;
        }   
           else if(!isalpha(s[l]) && !isalpha(s[r])){
            r--;
            l++;
        }  
       
}
return s;
}  
int main(){
    string words="ab-cd";
    // string ban ={"hit"};
   string res= reverseOnlyLetters(words);
   cout<<res;
}