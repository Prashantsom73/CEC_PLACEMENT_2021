 #include<bits/stdc++.h>
using namespace std;
 int mountin(vector<int> &a){
        int low =0;
        int high = a.size();
        high --;
        while(low <= high) {
            int mid = low + (high - low)/2;
            if (a[mid+1] < a[mid] && a[mid-1] < a[mid]) return mid;
            else if (a[mid] < a[mid+1]) low = mid +1;
            else high = mid-1;
        }
        return 0;
    }
int main(){
    vector<int> arr = {0,1,0};
    int result= mountin(arr);
    cout<<result;
    
}