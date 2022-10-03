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
    int freq[30];
    memset(freq,0,sizeof(freq));
    f(i,0,n){
        ll num;cin>>num;
        f(j,0,30){
            if(num&(1<<j))freq[j]++;
        }
    }
    int g =0;
    f(i,0,30){
        g = __gcd(g,freq[i]);
    }
    f(i,1,n+1){
        if(g%i==0){
            cout<<i<<" ";
        }
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