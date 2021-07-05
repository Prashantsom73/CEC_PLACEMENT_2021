#include<bits/stdc++.h>
using namespace std;
 vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
  
             vector<int> count;
        for(int i=0;i<nums.size();i++)
        {
            int k=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]<nums[i])
                    k++;
            }
            count.push_back(k);
        }
        return count;
    }
        
int main(){
    vector<int> nums {8,1,2,2,3};
    vector<int> result= smallerNumbersThanCurrent(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
}