#include<bits/stdc++.h>
using namespace std;
    string thousandSeparator(int n) {
        if(n==0){
            return "0";
        }
        string no = to_string(n);
        string res="";
        reverse(no.begin(),no.end());
        for(int i=1;i<=no.size();i++){
                res+=no[i-1];
                if(i%3==0 && i!=no.size()){
                    res+=".";
                }
        }
        reverse(res.begin(),res.end());
        return res;   
}
int main(){
    cout<<thousandSeparator(123456789);
}