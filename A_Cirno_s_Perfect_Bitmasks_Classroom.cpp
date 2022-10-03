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
        ll n;cin>>n;
        int fst = -1;
        f(i,0,31){
            if(n&(1<<i)){
                fst = i;
                break;
            }
        }
        int ans = 0;
        int cnt = __builtin_popcountl(n);
        if(fst==0){
            ans = 1;
            ans += n>1 ? 0 : 2;
            cout<<ans<<endl;
        }else if(cnt>1){
            cout<<(1<<fst)<<endl;
        }else{
            cout<<(1<<fst)+1<<endl;
        }
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