#include<bits/stdc++.h>
using namespace std;
    vector<string> findWords(vector<string>& words){
        vector<string> v ={"qwertyuiop","asdfghjkl","zxcvbnm"};
        vector<string> res;
        map<char,int> mp;
        int j=1,t;
        for(auto i :v){
            for(auto t : i){
                mp[t]=j;
            }
            j+=1;
        }  
    
        int c=0,flag;
        for(auto i : words){
            string temp =i;
            transform(temp.begin(),temp.end(),temp.begin(),:: tolower);
            int c= mp[temp[0]];
              if(c == 1){
                    flag=0;
                 for(int j=0;j<temp.size();j++){
                    if(mp[temp[j]]!=1){
                        flag=1;
                        break;
                    }
                 }
                      if(flag==0){
                           res.push_back(i);
                     }
            }
            else if(c==2){
                        flag=0;
                   for(int j=0;j<temp.size();j++){
                       
                    if(mp[temp[j]]!=2){
                        flag=1;
                        break;
                    }

                    }
                     if(flag==0){
                           res.push_back(i);
                     }
                 }
                
              else if(c==3){
                   flag=0;
                   for(int j=0;j<temp.size();j++){
                        
                    if(mp[temp[j]]!=3){
                        flag=1;
                        break;
                    }
                    }
                     if(flag==0){
                           res.push_back(i);
                     }
   
            }
        }
        return res;
    }
int main(){
    vector<string> words = {"adsdf","sfd"};
   vector<string> res= findWords(words);
   for(auto i : res){
       cout<<i<<"   ";
   }
}
