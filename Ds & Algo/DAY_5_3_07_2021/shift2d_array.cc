#include<iostream>
#include<bits/stdc++.h>
using namespace std;


	vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
		int n=grid.size();
		int m=grid[0].size();
		vector<int>check;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				check.push_back(grid[i][j]);
			}
		}
		int z=check.size();
		k=k%z;
		reverse(check.begin(),check.end());// reverse whole vector
		reverse(check.begin()+0,check.begin()+k);// reverse from 0 to k
		reverse(check.begin()+k,check.begin()+z);// reverse from k to last
		int l=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				grid[i][j]=check[l];
				l++;
			}
		}
		return grid;

	}

int main(){
    vector<vector<int>> v={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> result= shiftGrid(v,3);

    for(int i=0;i<3;i++){
        for(auto it: result[i]){
            cout<<it;
        }
            cout<<endl;
    }

}