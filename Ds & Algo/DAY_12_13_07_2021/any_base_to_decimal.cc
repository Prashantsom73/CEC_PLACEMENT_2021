#include<bits/stdc++.h>
using namespace std;
void any_base_to_decimal(double n,int base){
    int num=n;
      int multiplier=1, result=0;
    while(num>0)
    {
        result=result+(num % 10)*multiplier;
        multiplier=multiplier*base;
        num=num/10;
    }
    cout<<result;

}
int main(){
    any_base_to_decimal(1101.01,2);
}