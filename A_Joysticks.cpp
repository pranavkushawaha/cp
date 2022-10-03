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

int util(int n,int m ){
    if(n==0 or m==0){
        return 0;
    }
    if(n<0 or m<0){
        return -1;
    }
    return  1+ max(util(n-2,m+1),util(n+1,m-2));
}

void solve(){
    int n,m,ans=0;cin>>n>>m;
    while(n>0 and m>0){
        if(n<m)swap(n,m);
        n-=2;
        m++;
        if(n<0 || m<0){
            break;
        }
        ans++;
    }
    cout<<ans<<endl;
}

int main(){
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}