#include <bits/stdc++.h>
#define REP(x,ini,fim) for(int x = ini; x < fim; x++)
#define endl "\n"
#define debug(x) cout << "DEBUG: " << x << endl;

using namespace std;

typedef long long ll;

int n,m;

vector<int> adj[100010];
int visited[100010];
int id;

int dfs(int x){

    if(visited[x] == id) return 0;
    visited[x] = id;

    for(auto v : adj[x]){
        return dfs(v);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;

    int u, v;

    for(int i = 0; i < m; i++){
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    for(int i = 1; i <= n; i++){
        sort(adj[i].begin(),adj[i].end());        
    }
    
    for(int i = 1; i <= n; i++){
        id = i;
        cout << 1+dfs(i) << endl;
    }

    return 0;
}