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
    int n;cin>>n;
    string s;cin>>s;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            int j=i+1;
            while(j<n and s[j]!='0')j++;
            if(j==n){
                if(i==n-1){
                    // ans++;
                    break;
                }
            }else{
                if(j-i==2){
                    ans++;
                }else if(j-i==1){
                    ans+=2;
                }
            }
            i=j-1;
        }
    }
    cout<<ans<<endl;
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