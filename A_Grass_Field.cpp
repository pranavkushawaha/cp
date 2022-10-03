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
        int cnt =0;
        int a[2][2];f(i,0,2){
            f(j,0,2){
                cin>>a[i][j];
                if(a[i][j]==1){
                    cnt++;
                }
            }
        }
        if(cnt ==0){
            cout<<0<<endl;
        }else if(cnt == 1){
            cout<<1<<endl;
        }else if(cnt==3){
            cout<<1<<endl;
        }else if(cnt==4){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
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