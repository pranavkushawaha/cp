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
    int s,n;cin>>s>>n;
    vector<pair<int,int>> a(n);f(i,0,n){
        cin>>a[i].first;
        cin>>a[i].second;
    }
    sort(all(a),[](pair<int,int> a,pair<int,int> b){
        return a.first==b.first ? a.second>b.second : a.first<b.first;
    });
    ll sum = s;
    for(auto i:a){
        if(sum<=i.first){
            cout<<"NO"<<endl;
            return ;
        }else{
            sum+=i.second;
        }
    }
    cout<<"YES"<<endl;
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