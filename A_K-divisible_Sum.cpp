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
        int n,k;cin>>n>>k;
        if(n>k){
            int nk = n/k;
            if(n%k){
                nk++;
            }
            k *= nk; 
        }
        if(k%n){
            cout<<k/n+1<<endl;
        }else{
            cout<<k/n<<endl;
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