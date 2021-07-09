#include<bits/stdc++.h>
using namespace std;
    int lengthOfLastWord(string s) {
        int ans = 0;
        for(int i=s.size()-1;i>=0;--i){
            if(s[i] == ' ' && ans > 0) return ans;
            if(s[i] != ' ') ans++;
        }
        return ans;
    }

int main(){
  string haystack = "hello ";
    cout<<lengthOfLastWord(haystack);
}