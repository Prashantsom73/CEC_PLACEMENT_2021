#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> transpose(vector<vector<int>>& nums) {
	vector<vector<int>> vec(nums[0].size(), vector<int>(nums.size()));
	for (int i = 0; i < nums.size(); i++) {
		for (int j = 0; j < nums[0].size(); j++) {
            reverse(vec.begin(),vec.end())
        }
