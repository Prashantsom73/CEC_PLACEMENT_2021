#include<bits/stdc++.h>
using namespace std;
int main(){
    string s= "hello";
    int fin[] ={2,4,6,6};
    int arr[]={1,1,2,4,4,6,6};
    int n=sizeof(fin)/sizeof(fin[0]);
    vector<int> v1={fin,fin+n};
    int n1=sizeof(arr)/sizeof(arr[0]);
    vector<int> v={arr,arr+n1};
    for(int i=0;i<n;i++){
        auto itr=find(v.begin(),v.end(),v1[i]);
        v.erase(itr);
        itr--;
    }
    cout<<endl;
    for(auto i: v){
        cout<<i<<"  ";
    }

}