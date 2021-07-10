    #include<bits/stdc++.h>
    using namespace std;    
    bool ransom(string ra,string ma) {
        int l1=ra.size();
        int l2=ma.size();
        if(l1>l2){
            return false;
        }
    map<char,int> mp1;
    for(int i=0;i<ma.size();i++){
        mp1[ra[i]]++;
    }
    for(int i=0;i<ra.size();i++){
        mp1[ra[i]]--;
    }
    for(auto i : mp1){
            cout<<i.second<<" ";
    }
    return true;
       
    }
    int main(){
        ransom("aa","aab");

    }