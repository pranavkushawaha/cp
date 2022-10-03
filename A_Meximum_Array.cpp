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
    int n;cin>>n;
    map<ll, ll> m;
    int a[n];f(i,0,n){
        cin>>a[i];
        m[a[i]]++;
    }
    vector<ll> ans;
    ll mex = 0;
    set<ll> s;
    f(i,0,n){
        m[a[i]]--;
        s.insert(a[i]);
        while(s.find(mex)!=s.end()){
            mex++;
        }
        if(m[mex]==0){
            s.clear();
            ans.pb(mex);
            mex=0;
        }
    }
    cout<<ans.size()<<endl;
    trav(i,ans){
        cout<<i<<" ";
    }
    cout<<endl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}