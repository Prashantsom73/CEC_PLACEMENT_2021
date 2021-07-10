#include<bits/stdc++.h>
using namespace std;
    int longestPalindrome(string s) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int c=0;
        bool odd=false;
        for(auto i : mp){
            if(i.second %2==0){
                c+=i.second;
            }
            else{
                c+=i.second-1;
                odd=true;
            }
        }
        return odd==true ? c+1 : c;
            
    }
    int main(){
       cout<< longestPalindrome("aabbcce");
    }