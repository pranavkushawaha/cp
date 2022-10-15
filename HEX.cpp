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

int dx[] = {-1,-1,0,1,1,1,0,-1};
int dy[] = {0,1,1,1,0,-1,-1,-1};

bool isValid(int i,int j,int n){
    return (i>=0 and j>=0 and i<n and j<n);
}

void solve(int t){
    int n;cin>>n;
    char a[n][n];
    cout<<"Case #"<<t<<": ";
    int rc=0,bc=0;
    f(i,0,n){
        f(j,0,n){
            cin>>a[i][j];
            if(a[i][j]=='R'){
                rc++;
            }else if(a[i][j]=='B'){
                bc++;
            }
        }
    }
    if(abs(rc-bc)>1){
        cout<<"Impossible"<<endl;
        return ;
    }
    int rw=0,bw=0;
    // checking r win
    // f(i,0,n){
    //     int c=0;
    //     f(j,0,n){
    //         if(a[j][i]=='R')c++;
    //         else break;
    //     }
    //     if(c==n)rw++;
    // }
    // f(i,0,n){
    //     int c=0;
    //     f(j,0,n){
    //         if(a[i][j]=='B')c++;
    //         else break;
    //     }
    //     if(c==n)bw++;
    // }
    queue<pair<int,int>> q;
    int vis[n][n];
    memset(vis,0,sizeof(vis));
    // checking path for blue
    f(i,0,n){
        if(a[i][0]=='B'){
            q.push({i,0});
            vis[i][0]=1;
        }
    }
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if(y==n-1){
            bw++;
        }else{
            f(i,0,8){
                int nx = x+dx[i];
                int ny = y+dy[i];
                if(isValid(nx,ny,n) and a[nx][ny]=='B' and !vis[nx][ny]){
                    q.push({nx,ny});
                    vis[nx][ny] = 1;
                }
            }
        }
    }
    memset(vis,0,sizeof(vis));
    // checking for red
    f(i,0,n){
        if(a[0][i]=='R'){
            q.push({0,i});
            vis[0][i]=1;
        }
    }
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if(x==n-1){
            rw++;
        }else{
            f(i,0,8){
                int nx = x+dx[i];
                int ny = y+dy[i];
                if(isValid(nx,ny,n) and a[nx][ny]=='R' and !vis[nx][ny]){
                    q.push({nx,ny});
                    vis[nx][ny] = 1;
                }
            }
        }
    }
    if(rw==0 and bw==0){
        cout<<"Nobody wins"<<endl;
    }else if(rw>1 || bw>1){
        cout<<"Impossible"<<endl;
    }else if(rw==1 and bw==0){
        cout<<"Red wins"<<endl;
    }else if(rw==1 and bw==1){
        cout<<"Impossible"<<endl;
    }else{
        cout<<"Blue wins"<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    int n=1;
    while(t--){
        solve(n);
        n++;
    }
    return 0;
}