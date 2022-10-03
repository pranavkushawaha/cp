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
        int a[n+1]={0};f(i,1,n+1)cin>>a[i];
        int m;cin>>m;
        int b[m+1]={0};f(i,1,m+1)cin>>b[i];
        sort(a,a+n+1);
        sort(b,b+m+1);
        {
            if(a[n]>=b[m]){
                cout<<"Alice"<<endl;
            }else{
                cout<<"Bob"<<endl;
            }
        }
        {
            if(b[m]>=a[n]){
                cout<<"Bob"<<endl;
            }else{
                cout<<"Alice"<<endl;
            }
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