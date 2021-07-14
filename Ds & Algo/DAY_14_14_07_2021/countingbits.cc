#include<bits/stdc++.h>
using namespace std;
vector<int> countBits(int n) {
        vector<int> res;
        for(int i=0;i<=n;i++){
            res.push_back(__builtin_popcount(i));
        }
        return res;
    }
int main()
{
    vector<int> res=countBits(5);
    for(auto i : res){
        cout<<i<<"  ";
    }

}