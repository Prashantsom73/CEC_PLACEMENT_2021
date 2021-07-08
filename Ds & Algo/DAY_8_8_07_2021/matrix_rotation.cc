#include<bits/stdc++.h>
using namespace std;
bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {    
        for(int i=0;i<4;i++){
                int n=mat.size();
                 for(int i=0;i<n;i++) {
                    for(int j=0;j<i;j++)
                        {
                            swap(mat[i][j],mat[j][i]);
                        }
                    }
                for(int i=0;i<n;i++)
                {
                    reverse(mat[i].begin(),mat[i].end());
                }
                    if(mat==target)
                        return true;
        }
                return false;
}

int main(){

    vector<vector<int>> mat = {{0,1},{1,0}}, target ={{1,0},{0,1}};
    cout<<findRotation(mat,target);

}