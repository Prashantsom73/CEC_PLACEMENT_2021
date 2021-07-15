#include<bits/stdc++.h>
using namespace std;
void any_base_to_decimal(double n,int base){
    string num=to_string(n);
    string first = num.substr(0,num.find('.'));
    int res=0;
    int po= first.size()-1;
    //before point calculation
    for(int i=0;i<first.size();i++){
        res+=(first[i]-'0')*pow(base,po);
        po--;
    }
    // calculation after point
    string second = num.substr(num.find('.')+1,3);
    if(stoi(second)!=0){
        int rap=0;
        for(int i=1;i<=second.size();i++){
            rap+=second[i-1]*pow(base,-i);
        }
        cout<<res<<"."<<rap;
    }
    else{
        cout<<res;
    }

}
int main(){
    any_base_to_decimal(1101,16);
}