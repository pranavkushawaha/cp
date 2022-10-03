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
        int n,m,k;cin>>n>>m>>k;
        string a,b;cin>>a>>b;
        sort(all(a));
        sort(all(b));
        int i=0,j=0;
        string ans;
        int takena = 0,takenb = 0;
        while(i<n and j<m){
            if(a[i]<=b[j]){
                if(takena>=k){
                    ans.pb(b[j++]);
                    takenb++;
                    takena=0;
                }else{
                    ans.pb(a[i++]);
                    takena++;
                    takenb=0;
                }
            }else{
                if(takenb>=k){
                    ans.pb(a[i++]);
                    takena++;
                    takenb = 0;
                }else{
                    ans.pb(b[j++]);
                    takenb++;
                    takena=0;
                }
            }
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