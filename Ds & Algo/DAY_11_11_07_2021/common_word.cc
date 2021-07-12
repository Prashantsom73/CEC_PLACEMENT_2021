#include<bits/stdc++.h>
using namespace std;
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int i=0;
        set<string>set={banned.begin(), banned.end()};
        map<string,int> mp;
        for(int i=0;i<paragraph.length();i++){
            paragraph[i]= isalpha(paragraph[i])?tolower(paragraph[i]):' ';
        }
        stringstream ss(paragraph);
        string word;

        while(ss>>word){
           if(!set.count(word)) 
                mp[word]++;
        }
    
        int max=INT_MIN;
        string res;
        for(auto i : mp){
            if(i.second>max){
                max=i.second;
                res=i.first;
            }
        }
    return res;
}
int main(){
    string words="Bob hit a ball, the hit BALL flew far after it was hit.";
    vector<string> ban ={"hit"};
   string res= mostCommonWord(words,ban);
   cout<<res;
}