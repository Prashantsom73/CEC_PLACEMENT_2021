#include<bits/stdc++.h>
using namespace std;

    string longestCommonPrefix(vector<string>& v) {
    sort(v.rbegin(),v.rend());  
    string result="";
    int n=v.size();
    for(int i=0;i<v[n-1].length();i++){
        if(v[0][i]==v[n-1][i]){
            result+=v[n-1][i];
        }
        else{
            break;
        }
    }
        return result;
    }
        

int main(){
     vector<string> strs = {"flower","flow","flight"};
    cout<<longestCommonPrefix(strs);


}