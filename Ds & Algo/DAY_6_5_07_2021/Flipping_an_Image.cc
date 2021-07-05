#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> transpose(vector<vector<int>>& nums) {
	for (int i = 0; i < nums.size(); i++) {
            reverse(nums[i].begin(),nums[i].end());
    }
	for (int i = 0; i < nums.size(); i++) {
		for (int j = 0; j < nums[0].size(); j++){
                nums[i][j]=1-nums[i][j];
        }
	}
	return nums ;
 }

int main(){
    vector<vector<int>> v={{1,1,0},{1,0,1},{0,0,0}};
    vector<vector<int>> result=transpose(v);
    for(int i=0;i<result.size();i++){
        for(auto it: result[i]){
            cout<<it<<" ";
        }
            cout<<endl;
    }

}