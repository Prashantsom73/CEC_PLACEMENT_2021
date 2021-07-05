#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        	for (int i = 0; i < matrix.size(); i++) {
		        for (int j = 0; j < matrix[0].size(); j++){
                    int v=matrix[i][0];
                        if(i>0 && j>0 && matrix[i-1][j-1]!=matrix[i][j]){
                            return false;
                            break;
                        }

                }
            }
            return true;

}
int main(){
    vector<vector<int>> v={{1,2,3,4},{5,1,2,3},{9,5,1,2}};
    bool result=isToeplitzMatrix(v);
    cout<<result;

}