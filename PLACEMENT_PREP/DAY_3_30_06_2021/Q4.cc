// problem statement: FInd the intersection of two array

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={4,9,5,4,1,0,7};
    vector<int>arr1={4,9,4,1,2,0,5};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    
    map<int, int> ap;
    set<int> s;

     for(int i=0;i<arr.size();i++){
         ap[arr[i]]=arr[i];
     }
     for(int i=0;i<arr1.size();i++){
         if(arr1[i]==ap[arr1[i]]){
             s.insert(arr1[i]);
         }
     }

     for(auto a : s){
         cout<<a<<endl;
     }
}