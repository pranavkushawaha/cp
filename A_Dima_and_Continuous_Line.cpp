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
    int a[n];f(i,0,n){
        cin>>a[i];
    }
    f(i,1,n){
        int p = min(a[i],a[i-1]);
        int q = max(a[i],a[i-1]);
        f(j,1,n){
            int r = min(a[j],a[j-1]);
            int s = max(a[j],a[j-1]);
            if(p<r and r<q and s>q){
                cout<<"yes"<<endl;
                return;
            }
        }
    }
    cout<<"no"<<endl;
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