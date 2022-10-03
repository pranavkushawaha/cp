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
    int l=INT_MIN,h=INT_MAX;
    f(z,0,n){
        string a,b;
        int num;
        cin>>a>>num>>b;
        if(b=="N"){
            if(a==">=") a = "<";
            else if(a==">") a = "<=";
            else if(a=="<=") a = ">";
            else a = ">=";
        }
        if(a==">=")l=max(l,num);
        else if(a==">")l=max(l,num+1);
        else if(a=="<=")h=min(h,num);
        else h=min(h,num-1);
    }
    if(l>h){
        cout<<"Impossible"<<endl;
    }else if(l==INT_MIN){
        cout<<h<<endl;
    }else{
        cout<<l<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}