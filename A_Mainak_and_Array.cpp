#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;
#define mp make_pair
#define pb push_back
#define f(i,a,b) for(int i=a;i<b;i++)
#define fr(j,a,b) for(int j=a;j>b;j--)
#define vi vector<int>
#define vvi vector<vi>
#define pi pair<int,int>


#define trav(a,x) for (auto& a : x)
#define all(x) x.begin(), x.end()

class Solution{
public:
    void solve(){
        int n;cin>>n;
        int a[n]; f(i,0,n)cin>>a[i];
        if(n==1){
            cout<<0<<endl;
            return;
        }
        int ans = a[n-1]-a[0];
        f(i,0,n-1){
            ans = max(ans,a[i]-a[i+1]);
        }
        f(i,1,n){
            ans = max(ans,a[i]-a[0]);
        }
        f(i,0,n-1){
            ans = max(ans,a[n-1]-a[i]);
        }
        cout<<ans<<endl;
    }
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    cin>>t;
    Solution ob;
    while(t--){
        ob.solve();
    }
    return 0;
}