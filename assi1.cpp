#include<bits/stdc++.h>
using namespace std;

bool hasChar(char c){
    string start="adgjmptw";
    for(auto x: start){
        if(c==x) return true;
    }
    return false;
}
int main(){
  int t; cin>>t;
  map<char, int>mp;
  int val=1;
  for(int i=0; i<26; i++){
    char c= 'a'+i;
    if(hasChar(c)){
        val++;
        mp[c]=val;
    }else{
        mp[c]=val;
    }
  }
  map<string, int>res;
  while(t--){
    string s; cin>>s;
    string tmp="";
    for(auto x: s){
        tmp+= char(mp[x]+'0');
    }
    res[tmp]++;
  }
  int v=0; string ans="";
  for(auto x: res){
    if(x.second > v){
        ans=x.first;
        v=x.second;
    }
  }
    cout<<ans<<"\n";

	return 0;
}
