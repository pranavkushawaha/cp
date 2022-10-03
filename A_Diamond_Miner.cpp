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
        // setprecision(15);
        int n;cin>>n;
        vi x,y;f(i,0,2*n){
            int a,b;cin>>a>>b;
            if(a==0){
                y.pb(abs(b));
            }else{
                x.pb(abs(a));
            }
        }
        sort(all(x));
        sort(all(y));
        double ans = 0.0;
        f(i,0,n){
            ans += sqrt(1.0*x[i]*x[i] + 1.0*y[i]*y[i]);
        }
        // cout<<fixed<<setprecision(15)<<ans<<endl;
        printf("%.15lf\n",ans);
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