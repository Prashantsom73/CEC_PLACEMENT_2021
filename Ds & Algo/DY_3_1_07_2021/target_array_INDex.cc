// Create Target Array in the Given Order
#include<bits/stdc++.h>
using namespace std;
vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> result;
        for(int i=0;i<index.size();i++){
            result.insert(result.begin()+index[i],nums[i]);
        }
        return result;

}
int main()
{
    vector<int> nums = {0,1,2,3,4};
    vector<int> index = {0,1,2,2,1};

    vector<int> result= createTargetArray(nums,index);
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
 
}