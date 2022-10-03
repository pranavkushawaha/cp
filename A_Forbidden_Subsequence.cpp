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
    string s,t;cin>>s>>t;
    sort(s.begin(),s.end());
    if(t=="abc"){
        if(s[0]!='a'){
            cout<<s<<endl;
            return;
        }
        int a[4]={0};
        f(i,0,s.size()){
            if(s[i]=='a')continue;
            if(s[i]=='c'){
                a[2]++;
            }else if(s[i]=='b'){
                a[1]++;
            }else break;
        }
        int i=0;
        for(;i<s.size();i++){
            if(s[i]!='a')break;
        }
        for(;a[2]--;i++){
            s[i] = 'c';
        }
        for(;a[1]--;i++){
            s[i] = 'b';
        }
    }     
    cout<<s<<endl;

}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}