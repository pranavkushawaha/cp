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
    int a,b;cin>>a>>b;
    int d = abs(a-b)/2;
    if((a+b)&1){
        cout<<(a+b-d-d)+1<<endl;
        for(int k=d;k<=a+b-d;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }else{
        cout<<((a+b-d-d)/2)+1<<endl;
        for(int k=d;k<=a+b-d;k+=2){
            cout<<k<<" ";
        }
        cout<<endl;
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