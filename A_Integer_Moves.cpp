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
    int x,y;cin>>x>>y;
    int sq = (x*x) + (y*y);
    if(sq==0){
        cout<<0<<endl;
        return ;
    }
    int ans = sqrt(sq);
    if(ans*ans == sq){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
    }
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