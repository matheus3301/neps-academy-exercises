#include <bits/stdc++.h>
#define endl "\n"
#define debug(x) cerr  << #x << " : " << x << endl;

using namespace std;

typedef long long ll;

const int mxN = 110;

int n,m;

const int INF = 2e31;

int adj[mxN][mxN];
int dist[mxN][mxN];

int ans = INF;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    int u,v,w;
    for(int i = 0; i < m; i++){
        cin >> u >> v >> w;

        adj[u][v] = w;
        adj[v][u] = w;

    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) dist[i][j] = 0;
            else if(adj[i][j]) dist[i][j] = adj[i][j];
            else dist[i][j] = INF;
        }   
    }

    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    for(int k = 0; k < n; k++)
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
    
    for(int i = 0; i < n; i++){
        int maior = 0;
        for(int j = 0; j < n; j++){
            if(dist[i][j] != INF && i != j) maior = max(maior,dist[i][j]);
        }
        ans = min(maior,ans);
    }

    cout << ans << endl;

    return 0;
}