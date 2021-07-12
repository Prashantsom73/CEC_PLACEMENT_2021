#include<bits/stdc++.h>
using namespace std;
    string reformatDate(string date){
        vector<string> dd;
        map<string,string> mm;
       vector<string> m={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        int j = 1;
        for(int i=0;i<m.size();i++){
            if(j<10){
                mm[m[i]]= "0"+ to_string(j);
            }
            else{
                mm[m[i]]=to_string(j);
            }
            j++;
        }
        // for(auto i : mm){
        //     cout<<i.first <<"   "<<i.second;
        //     cout<<endl;
        // }
    
         stringstream ss(date);
        string word;
        while(ss>>word){
            dd.push_back(word);
        }
        // for(auto d :  dd){
        //     cout<<d <<endl;
        // }
        
        int d=10;
        string res;
        if(stoi(dd[0].substr(0,1)) < 10)
            res= dd[2] + "-" + mm[dd[1]] +"-"+ "0" + dd[0].substr(0,1);
          else 
             res = dd[2] + "-" + mm[dd[2]] + "-" + dd[0].substr(0,2);  

        return res;
    
    } 

int main(){
    string words="6th Jun 1933";
     cout<<reformatDate(words);
}