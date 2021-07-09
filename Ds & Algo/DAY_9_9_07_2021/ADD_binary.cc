#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 string addBinary(string a, string b) {
     int l1= a.size();int l2= b.size();
    string str1=min(l1,l2)==l1 ? b : a;
    string str2= str1==a? b:a;
    reverse(str2.begin(),str2.end());
    int n1= str1.size();int n2= str2.size();
    while(n1!=n2){
        str2+='0';
        n2=str2.size();
    }
    reverse(str2.begin(),str2.end());
    cout<< str1[3]<<endl<<str2<<n2;
    int carry =0;
    string result="";
    for(int i=n1-1;i>=0;i--){
        if((str1[i]=='1' && str2[i]=='0')|| (str1[i]=='0' && str2[i]=='1'))
            if(carry==0)
                result+="1";
            else{
                result+='0';
                carry=1;
            }
        else if((str1[i]=='1' && str2[i]=='1'))
            if(carry==1){
                result+='1';}
            else{    
                result+='0';
                carry=1;}
        else if((str1[i]=='0' && str2[i]=='0'))
            if(carry==1){
                result+='1';
                carry=0;}
            else
                result+='0';
        }
        if(carry==1)
         result=result+to_string(carry);
        reverse(result.begin(),result.end());
        return result;
    }
int main(){
    string a="11";
    string b="1";
    cout<<addBinary(a,b);
}