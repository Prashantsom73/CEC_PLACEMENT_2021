#include<bits/stdc++.h>
using namespace std;
bool poweroftwo(int n){
    if(n==0){
        return 0;
    }
    while(n!=1){
        if(n%2!=0){
            return false;
        }
        n=n/2;
    }
    return true;

}
int main(){
    cout<<poweroftwo(64);
    return 0;
}