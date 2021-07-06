#include<bits/stdc++.h>
using namespace std;
int main()
{
    
     vector<vector<int> >v= {{1,10,4,2},
                              {9,3,8,7},
     
                             {15,16,17,12}};
      int n=3,m=4;
    int min,max;
    int k=0,res;
    for(int i=0;i<n;i++)
    {
        min=INT_MIN;max=INT_MAX;k=0;
        for(int j=0;j<m;j++)
        {
            if(v[i][j]<max){
                max=v[i][j];
                k=j;
            }
        }
        for(int j=0;j<n;j++)
        {
            if(v[j][k]>min){
                min=v[j][k];
                
            }   
        }
        if(min==max)
        {     
            cout<<min;
            break;
        }
    }
return 0;
}