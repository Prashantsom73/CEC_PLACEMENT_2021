#include<bits/stdc++.h>
using namespace std;
void missing(vector<int> &a){
    int sum= accumulate(a.begin(),a.end(),0);
    int n=a.size();
    cout<<n*(n+1)/2-sum;
}
int main(){
    vector<int> arr={0,1,4,2}; // output :=3
    missing(arr);
}