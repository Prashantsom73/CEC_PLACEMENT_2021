

#include<bits/stdc++.h>
using namespace std;
// METHOD 1
bool ransom(string rans, string mag) {
if(mag.size()<rans.size()) return false;
int mp[26]={0};
for(auto x : mag)
mp[x-'a']++;
for(auto x : rans)
mp[x-'a']--;
for(int x : mp) {
if(x<0) return false;
}
return true;
}
// METHOD 2

//    bool ransom(string ra,string ma) {
//     int l1=ra.size();
//     int l2=ma.size();
//     if(l1>l2){
//         return false;
//     }
// map<char,int> mp1;
// for(int i=0;i<ma.size();i++){
//     mp1[ma[i]]++;
// }
// for(int i=0;i<ra.size();i++){
//     mp1[ra[i]]--;
// }
// for(auto i : mp1){
//     if(i.second<0){
//         return false;
//     }
// }
// return true;
// }
// MEthod 3

//    bool canConstruct(string ra,string ma) {
//     int l1=ra.size();
//     int l2=ma.size();
//     if(l1>l2){
//         return false;
//     }
// map<char,int> mp1;
//     map<char,int> mp2;
// for(int i=0;i<ma.size();i++){
//     mp1[ma[i]]++;
// }
// for(int i=0;i<ra.size();i++){
//     mp2[ra[i]]++;
// }
// for(auto i : mp2){
//     if(mp2[i.first]>mp1[i.first]){
//         return false;
//     }
// }
// return true;
// }
int main(){
    ransom("aa","aab");

}