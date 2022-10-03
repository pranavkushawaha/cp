#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;
#define mp make_pair
#define pb push_back
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fr(j,a,b) for(int j=a;j>b;j--)
#define vi vector<ll>
#define vvi vector<vi>

#define trav(a,x) for (auto& a : x)
#define all(x) x.begin(), x.end()


void solve(){
    int n,x;cin>>n>>x;
    vi a(n);f(i,0,n)cin>>a[i];
    vector<bool> used(n,false);
    sort(all(a));
    int ans = 0;
    int j = n-1;
    fr(i,n-1,-1){
        if(used[i])continue;
        if(a[i]%x==0){
            ll f = a[i]/x;
            while(j>=0 and (used[j] || a[j] > f))j--;
            if(j>=0 and !used[j] and a[j]==f){
                used[j] = used[i] = true;
                ans+=2;
            }
        }
    } 
    cout<<(n-ans)<<endl;
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