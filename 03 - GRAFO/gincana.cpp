#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

bool visited[1010];
vector<int> adj[1010];

void dfs(int x){
    visited[x] = true;

    for(int v : adj[x]){
        if(visited[v]) continue;
        dfs(v);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);

    }

    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            ans++;
            dfs(i);
        }
    }
    
    cout << ans << endl;
    
    return 0;
}