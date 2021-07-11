#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num1="123";
    string num2="121";// 244
    int l1= num1.size()-1;
    int l2= num2.size()-1;
    int sum=0,carry=0;
    string result;
    while(l1>=0 || l2>=0){
        sum=carry;
        if(l1>=0){
            sum = num1[l1]-'0';
        }
        if(l2>=0){
            sum+= num2[l2]-'0';
        }
        if(carry==1){
            sum=sum+carry;
        }
        result+=to_string(sum%10);
        carry=sum/10;
        l1--;
        l2--;
    }
    if(carry==1){
        result+='1';
    }
        reverse(result.begin(),result.end());
        cout<<result;

}