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
    int n,m;cin>>n>>m;
    f(i,0,n){
        if(i%2==0){
            cout<<string(m,'#')<<endl;
        }else{
            if((i+1)%4==0){
                cout<<"#"<<string(m-1,'.')<<endl;
            }else{
                cout<<string(m-1,'.')<<"#"<<endl;
            }
        }
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