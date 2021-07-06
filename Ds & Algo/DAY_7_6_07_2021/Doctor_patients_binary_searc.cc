#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find(vector<int> arr, int N, int X){
    int start = 0;
    int end = N;
    while (start <= end) {
        int mid = start
                  + (end - start) / 2;
        if (X == arr[mid] && arr[mid-1]!=0) {
            return mid;
        }
        else if (X < arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}
bool compare(pair<int,int> a,pair<int,int> b){
    if(a.second==b.second){
        return a.first<b.first; 
    }
    return a.second<b.second;
}
vector<int> Doctor_patients(vector<vector<int>>& arr,int k){
    vector<pair<int,int>> a;
    vector<int> b;
    int i=0;
    for (auto it : arr) {
        int key=0;
            a.push_back(make_pair(i,find(it,it.size(),key)));
            i++;
        }
    
    sort(a.begin(),a.end(),compare);
    int m=0;
    for(auto i : a){
        cout << i.first<<endl;
        m++;
        if(m==k){
            break;
        }
    }
    return b;
}

int main(){
//     vector<vector<int>> v={{1,0,0,0},
//  {1,1,1,1},
//  {1,0,0,0},
//  {1,0,0,0}} ;
     vector<vector<int>> v={{1,1,1,0},{1,1,0,0},{1,1,0,0},{1,1,1,0}};
    Doctor_patients(v,4 );
    
}