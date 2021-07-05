#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> transpose(vector<vector<int>>& nums) {
	vector<vector<int>> vec(nums[0].size(), vector<int>(nums.size()));
	for (int i = 0; i < nums.size(); i++) {
		for (int j = 0; j < nums[0].size(); j++) {
			vec[j][i] = nums[i][j];
		}
	}
	return vec;
 }

int main(){
    vector<vector<int>> v={{2,4,-1},{-10,5,11},{18,-7,6}};
    vector<vector<int>> result=transpose(v);
    for(int i=0;i<result.size();i++){
        for(auto it: result[i]){
            cout<<it<<" ";
        }
            cout<<endl;
    }

}