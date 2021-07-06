#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Doctor_patients(vector<vector<int>>& nums) {
int k=0;
for (int i = 0; i < nums.size(); i++) {
    for (int j = 0; j < nums[0].size(); j++) {
        if(nums[j][i]==0){
            if(nums[j][ i-1]!=0){
                k++;
                cout<<j <<" ";
            }
        }
    }     
    if(k==2){
        break;
    }
}
}

int main(){
    vector<vector<int>> v={{1,1,1,0},{1,1,0,0},{1,0,0,0},{1,1,0,0}};
    Doctor_patients(v);
    
}