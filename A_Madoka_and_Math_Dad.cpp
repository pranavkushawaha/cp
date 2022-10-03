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
    int nw = n;
    string a,b;
    f(i,0,nw){
        if(n<=0)break;
        if(i&1){
            a+='2';
            n-=2;
        }else{
            a+='1';
            n--;
        }
    }
    if(n<0)a="";
    n = nw;
    f(i,0,nw){
        if(n<=0)break;
        if(!(i&1)){
            b+='2';
            n-=2;
        }else{
            b+='1';
            n--;
        }
    }
    if(n<0)b="";
    // cout<<a<<" "<<b<<endl;
    cout<<max(a,b)<<endl;
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