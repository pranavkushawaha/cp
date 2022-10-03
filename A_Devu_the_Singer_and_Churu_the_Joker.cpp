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
    int n,d;cin>>n>>d;
    int a[n];f(i,0,n)cin>>a[i];
    int sum = accumulate(a,a+n,0);
    sum+= 10*(n-1);
    if(sum>d){
        cout<<-1<<endl;
    }else{
        int ans = 2*(n-1);
        ans += max(0,(d-sum)/5);
        cout<<ans<<endl;
    }

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