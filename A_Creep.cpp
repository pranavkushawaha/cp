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
        int a,b;cin>>a>>b;
        if(a>=b){
            while(a and b){
            cout<<"10";a--,b--;
        }}else{
            while(a and b){
                cout<<"01";a--;b--;
            }
        }
        if(a){
            cout<<string(a,'0');
        }
        if(b){
            cout<<string(b,'1');
        }
        cout<<endl;
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