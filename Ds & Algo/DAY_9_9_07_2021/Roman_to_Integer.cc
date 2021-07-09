#include<bits/stdc++.h>
using namespace std;
int find(char a){
    switch(a){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: break;
    }
    return 0;
}
int romanToInt(string s) {
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(find(s[i])<find(s[i+1])){
            sum+=find(s[i+1])-find(s[i]);
            i++;
        }else{
            sum+=find(s[i]);
           
        }
    }  
    return sum;
}
int main(){
    isValid("MCMXCIV");
}