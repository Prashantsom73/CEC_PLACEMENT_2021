#include<iostream>
using namespace std;
void countone(int n){
    int mask=1,c=0;
    while(n!=0){
        if(mask!=n){
            c++;
            n=mask<<1;
        }
    }
    cout<<c;
}
int main(){
    countone(9);
}