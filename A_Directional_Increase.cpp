#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;
#define mp make_pair
#define pb push_back
#define f(i,a,b) for(int i=a;i<b;i++)
#define fr(j,a,b) for(int j=a;j>b;j--)
#define vi vector<ll>
#define vvi vector<vi>
#define pi pair<int,int>


#define trav(a,x) for (auto& a : x)
#define all(x) x.begin(), x.end()

class Solution{
public:
    void solve(){
        ll n;cin>>n;
        vi a(n);f(i,0,n)cin>>a[i];
        partial_sum(all(a),a.begin());
        bool ans = a.back()==0;
        f(i,0,n){
            if(a[i]<0){
                ans = false;
            }
        }
        while(a.size() and a.back()==0)a.pop_back();
        if(!a.empty() and count(all(a),0)){
            ans = false;
        }
        if(ans){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
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