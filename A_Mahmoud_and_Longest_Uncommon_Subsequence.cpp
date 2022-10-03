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

void solve(){
    string a,b;cin>>a>>b;
    if(a==b){
        cout<<-1<<endl;
    }else{
        cout<<max(a.size(),b.size())<<endl;
    }
}

int main(){
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}