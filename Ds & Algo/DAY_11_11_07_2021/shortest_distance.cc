    #include<bits/stdc++.h>
using namespace std;
    
    vector<int> shortestToChar(string s, char c) {
        vector<int> p;
        vector<int> res;
        for(int i=0;i<s.size();i++){
            if(s[i]==c)
                p.push_back(i);
        }
        for(int i=0;i<s.size();i++){
            int min =INT_MAX;
            for(auto j : p){
                if(abs(i-j)<min){
                    min=abs(i-j);
                }
            }
            res.push_back(min);
        }
        return res;  
        
    }

    int main(){
    string s= "loveleetcode";
    char c = 'e';
   vector<int> res= shortestToChar(s,c);
   for(auto i : res){
       cout<<i<<"   ";
   }
}
