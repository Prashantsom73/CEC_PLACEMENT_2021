#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={4,9,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arr1[]={9,4,9,8,4};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    map<int, int> ap;
     for(int i=0;i<n;i++){
         ap[arr[i]]++;
     }
     for(int i=0;i<n1;i++){
         ap[arr1[i]]++;
     }
     for(auto a : ap){
         cout<<a.first<<a.second;
         cout<<endl;
     }


}