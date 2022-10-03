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
    int a,b,c;
    a = b = c = 0;
    string s;cin>>s;
    trav(i,s){
        switch (i)
        {
        case 'A':
            a++;
            break;
        case 'B':
            b++;
            break;
        case 'C':
            c++;
            break;
        default:
            break;
        }
    }
    if(a+c==b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
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