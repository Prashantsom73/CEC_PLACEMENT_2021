#include<bits/stdc++.h>
using namespace std;
int find(char a){
    switch(a){
        case '(': return 1;
        case ')': return -1;
        case '{': return 2;
        case '}': return -2;
        case '[': return 3;
        case ']': return -3;
    }
}
bool isValid(string s) {
    vector<int> v;
    v.push_back(find(s[0]));
    int c=v[0];
    for(int i=1;i<s.size();i++){
            v.push_back(find(s[i]));
    }
        for(auto j : v){
            cout<<j;
        }
    
}
int main(){
    isValid("{[]}");
}