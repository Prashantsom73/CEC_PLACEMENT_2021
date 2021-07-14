#include<bits/stdc++.h>
using namespace std;
int missing(int n){
        if(n==0){
            return false;
        }
        while(n!=1){
            if(n%4!=0)
                return false;
            n=n/4;
        }
        return true;
    }
int main(){
   cout<< missing(8);//false
   cout<< missing(16);//true
}