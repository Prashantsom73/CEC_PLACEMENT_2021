#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> a,pair<int,int> b){
    if(a.second==b.second){
        return a.first<b.first; 
    }
    return a.second<b.second;
}
vector<int> sortByBits(vector<int>& arr){
        vector<pair<int,int>> mp;
        for(int i=0;i<arr.size();i++){
            mp.push_back(make_pair(arr[i],__builtin_popcount(arr[i])));
        }
        sort(mp.begin(),mp.end(),compare);
        arr.clear();
        for(auto i : mp){
        arr.push_back(i.first);
    }
    return arr;
}
int main(){
    vector<int> arr = {1024,512,256,128,64,32,16,8,4,2,1};
    vector<int> result= sortByBits(arr);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<"  ";
    }
    
}