#include<iostream>
#include<bits/stdc++.h>
using namespace std;   
int find(vector<int>& grid){
    int l=0;
    int r= grid.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(grid[mid]<0 && grid[mid-1]>0){
            return mid;
        }
        else if(grid[mid]>0){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return 0;
}

int main(){
    // vector<int> v={-1,-1,-2,-1};
     vector<vector<int>> v={{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
     int ans=0;
    for(auto it : v){
        int c = find(it);
        ans=ans+c;
    }
    cout<<ans;

}
