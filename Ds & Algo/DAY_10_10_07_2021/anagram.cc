
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//   bool isAnagram(string s, string t) {
//         int l1=s.size();
//         int l2=t.size();
//         if(l1!=l2){
//             return false;
//         }
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         if(s!=t){
//             return false;
//         }
//         return true;
//     }

bool isAnagram(string s, string t){
            int l1=s.size();
        int l2=t.size();
        if(l1!=l2){
            return false;
        }
    map<char,int> mp1;
    map<char,int> mp2;
    for(int i=0;i<s.size();i++){
        mp1[s[i]]++;
        mp2[t[i]]++;
    }
    for(auto i : mp1){
        if(mp2[i.first]!=i.second){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<isAnagram("anagram","nagram");
}