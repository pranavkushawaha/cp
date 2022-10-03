#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;
#define mp make_pair
#define pb push_back
#define f(i,a,b) for(int i=a;i<b;i++)
#define fr(j,a,b) for(int j=a;j>b;j--)
#define vi vector<int>
#define vvi vector<vi>

#define trav(a,x) for (auto& a : x)
#define all(x) x.begin(), x.end()

string util(string s,int i,int r,int g, int b){
    if(i==s.size()){
        if(r==1 and g==1 and b==1){
            return "YES";
        }else{
            return "NO";
        }
    }
    if(s[i]=='r'){
        return util(s,i+1,0,g,b);
    }
    if(s[i]=='g'){
        return util(s,i+1,r,0,b);
    }
    if(s[i]=='b'){
        return util(s,i+1,r,g,0);
    }
    if(s[i]=='G'){
        return g==0 ? util(s,i+1,r,1,b) : "NO";
    }
    if(s[i]=='R'){
        return r==0 ? util(s,i+1,1,g,b) : "NO";
    }
    if(s[i]=='B'){
        return b==0 ? util(s,i+1,r,g,1) : "NO";
    }
    return "NO";
}

void solve(){
    string s;cin>>s;
    cout<<util(s, 0, -1, -1, -1)<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}