#include<bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle) {
    int found = haystack.find(needle);
    return found;
}

int main(){
  string haystack = "hello", needle = "ll" ;
  cout<<strStr(haystack,needle);
}