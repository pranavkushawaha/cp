#include<bits/stdc++.h>

using namespace std;
int ans=INT_MIN;

void dfs(vector<vector<int>>&g, vector<int>&cost,int root, int maxVal){
    maxVal=max(maxVal, cost[root]);
    ans=max(ans,maxVal-cost[root]);
    for(auto x: g[root]){
        dfs(g,cost,x,maxVal);
    }
}

int main(){
    int n; cin>>n;
    vector<int>cost(n+1);
    for(int i=1; i<=n; i++){
        cin>>cost[i];
    }
    int root, j;
    vector<vector<int>>graph(n+1);
    for(int i=1; i<=n; i++){
        cin>>j;
        if(j==-1) root=i;
        else graph[j].push_back(i);
    }
    dfs(graph,cost,root, cost[root]);
    cout<<ans<<"\n";
    return 0;
}
