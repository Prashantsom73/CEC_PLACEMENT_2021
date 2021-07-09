#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    stack<int> st;
    for(int i=0;i<s.size();i++){
        // stack.push()
        if(s[i]=='{' ||s[i]=='(' ||s[i]=='['){
            st.push(s[i]);
        }
        else
            if(st.empty()==true) 
                return false;
            else if ((st.top()=='('&& s[i] ==')') || (st.top()=='{'&& s[i]=='}') || (st.top()=='['&& s[i]==']'))
                return true;
            else 
                st.pop();
        }
    }

    
int main(){
    cout<<isValid("{[]}");
}