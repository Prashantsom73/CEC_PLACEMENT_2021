#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> decode(vector<int>& encoded, int first) {
    vector<int> d;
    int x;
    d.push_back(first);
    for(int i=0;i< encoded.size();i++){

             x=encoded[i]^first;
            first=x;
            d.push_back(first);
    }
    return d;        
}
int main(){
    vector<int> nums {1,2,3};
    int first=1;
    vector<int> result= decode(nums,first);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<"  ";
    }
}