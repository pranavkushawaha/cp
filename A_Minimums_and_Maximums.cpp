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
    int a,b,c,d;cin>>a>>b>>c>>d;
    int ans = INT_MAX;
    if(c<=b and c>=a){
        ans = min(ans,c);
    }else{
        ans = min(ans,a+c);
    }
    if(a>=c and a<=d){
        ans = min(ans,a);
    }
    cout<<ans<<endl;
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