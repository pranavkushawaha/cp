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
    int a[3];f(i,0,3)cin>>a[i];
    vi dp(n+1,0);
    dp[0]=1;
    f(i,0,3){
        f(j,a[i],n+1){
            if(dp[j-a[i]]){
                dp[j] = max(dp[j],dp[j-a[i]]+1);
            }
        }
    }
    cout<<dp[n]-1<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}