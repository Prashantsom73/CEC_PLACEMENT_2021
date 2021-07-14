#include<bits/stdc++.h>
using namespace std;
//  int singleNumber(vector<int>& nums) {
//         int a = 0;

//     for (auto& i: nums){
//        a ^= i;
//        cout<<a<<endl;
//     };
//         return a;
//     }

//    int singleNumber(vector<int>& nums) {
//         set<int> s(nums.begin(),nums.end());
//         int sum=0;
//         for(auto i : s){
//             sum+=i*2;
//         }
//         int sum2=accumulate(nums.begin(),nums.end(),0);
//         return sum-sum2;
        
//     }

    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
            for(int i=0;i<nums.size();i++){
                mp[nums[i]]++;
            }
        int a;
        for(auto i: mp){
            if(i.second!=2){
                a=i.first;
            }
        }
        return a;
    }
int main(){
    vector<int> nums={4,1,2,1,2};
    cout<<singleNumber(nums);
}