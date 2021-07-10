#include<bits/stdc++.h>
using namespace std;
    // int strStr(string haystack, string needle) {
    //     int m = haystack.size(), n = needle.size();
    //     if(n==0){
    //         return 0;
    //     }
    //     for (int i = 0; i<=m-n; i++) {
    //         int j = 0;
    //         for (; j < n; j++) {
    //             if (haystack[i + j] != needle[j]) {
    //                 break;
    //             }
    //         }
    //         if (j == n) {
    //             return i;
    //         }
    //     }
    //     return -1;
    // }
       int strStr(string haystack, string needle) {
        int m = haystack.size(), n = needle.size();

        int j=0;
        for (int i = 0; i<=m-n; i++) {
            if(haystack[i]==needle[j]){

            if(haystack.substr(i,n)==needle){
                return i;
            }
            }
        }
        return -1;
    }
int main(){
  string haystack = "ello", needle = "ll" ;
  cout<<strStr(haystack,needle);
}