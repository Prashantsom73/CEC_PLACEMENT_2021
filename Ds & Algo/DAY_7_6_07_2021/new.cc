#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& nums) {

    int m=0;
	for (int i = 0; i < nums.size(); i++) {
        int min=*min_element(nums[i].begin(),nums[i].end());
		for (int j = 0; j < nums[0].size(); j++) {
            int max=*max_element(nums[j].begin(),nums[j].end());
            // cout<<max;
            if(min>max){
                m=min;
            }
            if(m==max){
                cout<<m;
                break;
            }
		}
	}
    // cout<<m;
 }

int main(){
    vector<vector<int>> v={{1,10,4,2},{9,3,8,7},{15,16,17,12}};
    vector<vector<int>> result=transpose(v);
    // for(int i=0;i<result.size();i++){
    //     for(auto it: result[i]){
    //         cout<<it<<" ";
    //     }
    //         cout<<endl;
    // }

}