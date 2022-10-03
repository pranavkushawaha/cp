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
    int sum=0;
    int a[n],b[n];f(i,0,n){
        cin>>a[i];
        sum+=a[i];
        b[i] = a[i]==1?-1:1;
    }
    if(n==1){
        cout<<1-a[0]<<endl;
        return;
    }
    int maxsofar=-1e6,maxendhere=-1e6;
    for(int i=0;i<n;i++){
        maxendhere = max(maxendhere+b[i],b[i]);
        maxsofar = max(maxsofar,maxendhere);
    }
    // int ans = max(sum+maxsofar)
    cout<<(sum+maxsofar)<<endl;
}

int main(){
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}