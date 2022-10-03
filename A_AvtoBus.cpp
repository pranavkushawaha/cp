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
    ll n;cin>>n;
    ll max=-1,min=-1;
    if(n%4==0){
        max = n/4;
    }
    if(n%6==0){
        min = n/6;
    }
    if(min==-1 and max==-1){
        cout<<-1<<endl;
    }else if(min==-1 or max==-1){
        cout<<std::max(max,min)<<" "<<std::max(max,min)<<endl;
    }else{
        cout<<std::min(max,min)<<" "<<std::max(max,min)<<endl;
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