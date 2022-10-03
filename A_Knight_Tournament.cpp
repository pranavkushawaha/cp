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
        int n,m;cin>>n>>m;
        vi ans(n+1,0);
        set<int> s;
        f(i,1,n+5)s.insert(i);
        while(m--){
            int l,r,x;cin>>l>>r>>x;
            auto lit = s.lower_bound(l);
            auto rit = s.upper_bound(r);
            for(auto it=lit;it!=rit;it++){
                int val = *it;
                ans[val] = x;
            }
            s.erase(lit,rit);
            s.insert(x);
            ans[x] = 0;
        }
        f(i,1,n+1)cout<<ans[i]<<" ";
        cout<<endl;
    }
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    // cin>>t;
    Solution ob;
    while(t--){
        ob.solve();
    }
    return 0;
}