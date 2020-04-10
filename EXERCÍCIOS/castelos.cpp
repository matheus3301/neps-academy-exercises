#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

#define MAXN 110

vector<int> adj[MAXN];

int visited[MAXN];
int castelo[MAXN];

int n , m;
int contador;

int de, para, cor;

bool dfs(int x){
    if(visited[x] == contador){
        return false;
    }
    visited[x] = contador;

    if(x == para){
        castelo[x] = cor;
        return true;
    }

    for(int v : adj[x]){
        if(dfs(v)){
            castelo[x] = cor;
            return true;
        }
    }

    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    
    for(int i = 0; i < n-1; i++){
        
        int u,v;cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    for(contador = 1; contador <= m; contador++){
        cin >> de >> para >> cor;
        dfs(de);
    }

    for(int i = 1; i <= n; i++){
        cout << castelo[i] << " ";
    }
    cout << endl;

    return 0;
}