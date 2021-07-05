#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countConsistentStrings(string allowed, vector<string>& words) {
        int c=0;
        map<char,int> mp;
        for(auto i : allowed){
            mp[i]=1;
        }
        int cnt=0;
        for(auto i : words){
        int c=0;
            for(auto k :i){
                if(mp[k]==0){
                    c++;
                    break;
                }
            }
                if(c==0){
                    cnt++;
                }
        }
        return cnt;
}
int main(){
    vector<string> str={"ad","bd","aaab","baa","badab"};
    cout<<countConsistentStrings("ab",str);
}