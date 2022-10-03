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
        string s;cin>>s;
        if(n&1){
            int m = (n-1)/2;
            int cnt = 1;
            int l=m-1;
            while(l>=0 and s[l--]==s[m])cnt++;
            int r = m+1;
            while(r<n and s[r++]==s[m])cnt++;
            cout<<cnt<<endl;
        }else{
            int m = n/2;
            int l = m-1,r=m;
            int cnt=0;
            while(l>=0 and r<n and s[l--]==s[m] and s[r++]==s[m])cnt+=2;
            cout<<cnt<<endl;
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