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
    bool containszero=false;
    vi res;
    int m[200]={0};
    int a[n];f(i,0,n){
        cin>>a[i];
        if(!a[i])containszero=true;
        m[a[i]]++;
    }
    if(containszero){
        int c=0;
        while(c<n){
            for(int i=0;i<200;i++){
                if(m[i]){
                    res.pb(i);
                    c++;
                    m[i]--;
                }
            }
        }
        f(i,0,n)cout<<res[i]<<" ";
        cout<<endl;
        return;
    }
    f(i,0,n)cout<<a[i]<<" ";
    cout<<endl;

}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}