#include<bits/stdc++.h>
using namespace std;
void decimal_to_any(double n,int base){
    int t1=n;;
    string res="";
    while(t1>=1){
        int temp=t1%base;
        res+=to_string(temp);
        t1=t1/2;
    }
    reverse(res.begin(),res.end());
    cout<<res;
}
int main(){
    decimal_to_any(19,2);
}