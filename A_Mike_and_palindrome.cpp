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
        string s;cin>>s;
        int c = 0,l=0,h=s.size()-1;
        while(l<=h){
            if(s[l++]!=s[h--])c++;
        }
        if(c>1 || (c==0 and !(s.size()&1))){
            cout<<"NO"<<endl;
        }else cout<<"YES"<<endl;
    }

    int main(){
        ll t=1;
        // cin>>t;
        while(t--){
            solve();
        }
        return 0;
    }